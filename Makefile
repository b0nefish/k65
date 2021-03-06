

# ------------------------------------------------ Project definitions ------------------------------------------------


_OBJECTS+= asm.o
_OBJECTS+= base/convert_parse.o
_OBJECTS+= base/streams.o
_OBJECTS+= base/strings.o
_OBJECTS+= base/vfs.o
_OBJECTS+= compiler_src.o
_OBJECTS+= comstate.o
_OBJECTS+= compiler_eval.o
_OBJECTS+= gen/compiler.o
_OBJECTS+= imager.o
_OBJECTS+= main.o
_OBJECTS+= sqapi.o
_OBJECTS+= sqbind.o
_OBJECTS+= sqlinker.o
_OBJECTS+= squirrel.o
_OBJECTS+= stdafx.o

_HEADERS+= asm.h
_HEADERS+= base/base.h
_HEADERS+= base/convert2.h
_HEADERS+= base/vmath.h
_HEADERS+= base/streams.h
_HEADERS+= base/vfs.h
_HEADERS+= common.h
_HEADERS+= compiler.h
_HEADERS+= comstate.h
_HEADERS+= eval.h
_HEADERS+= evalparser.h
_HEADERS+= imager.h
_HEADERS+= optab.h
_HEADERS+= sqbind.h
_HEADERS+= sqlinker.h
_HEADERS+= squirrel.h
_HEADERS+= stdafx.h
_HEADERS+= compiler_evany.h
_HEADERS+= gen/compiler_evops.inl






# ------------------------------------------------ Configuration ------------------------------------------------

COMPILER = bin/compiler.exe

ifeq ($(OS),Windows_NT)
	GAWK = bin/gawk
else 
	GAWK := $(shell which gawk)
endif

ifndef GAWK
    $(error gawk is not present. Please install gawk)
endif

# ------------------------------------------------ Misc settings ------------------------------------------------


OBJECTS = $(patsubst %,obj/%,$(_OBJECTS))
HEADERS = $(patsubst %,src/%,$(_HEADERS))

COMPILERPATH=compiler-standalone
CXXFLAGS+= -Isrc


# ------------------------------------------------ Top-level targets ------------------------------------------------

all: init out/compiler.exe test/test.exe out/k65.exe 

clean:
	rm -f out/k65.exe
	rm -f obj/*.o
	rm -f obj/base/*.o
	rm -f obj/gen/*.o
	rm -f src/gen/*.*
	rm -f bin/compiler.exe
	rm -f $(COMPILERPATH)/out/compiler.exe test/test.exe
	rm -f $(COMPILERPATH)/src/lexer.inl
	rm -f $(COMPILERPATH)/test/grammar.cpp


rebuild: clean all

init:
	mkdir -p doc
	mkdir -p out
	mkdir -p obj
	mkdir -p obj/base
	mkdir -p obj/gen
	mkdir -p src/gen



test: a2600-tutorial-03.bin


# ------------------------------------------------ Build rules ------------------------------------------------
src/lexer.inl: $(COMPILERPATH)/src/lexer.template $(COMPILERPATH)/src/_txt2cpp.awk
	gawk -f $(COMPILERPATH)/src/_txt2cpp.awk OUTFILE=$(COMPILERPATH)/src/lexer.inl $(COMPILERPATH)/src/lexer.template

out/compiler.exe: $(COMPILERPATH)/src/common.h src/lexer.inl $(COMPILERPATH)/src/lexer.cpp $(COMPILERPATH)/src/parser.cpp $(COMPILERPATH)/src/main.cpp
	mkdir -p $(COMPILERPATH)/out
	g++ $(COMPILERPATH)/src/lexer.cpp $(COMPILERPATH)/src/parser.cpp $(COMPILERPATH)/src/main.cpp -o $(COMPILERPATH)/out/compiler.exe

test/grammar.cpp: $(COMPILERPATH)/test/grammar.h $(COMPILERPATH)/out/compiler.exe
	./$(COMPILERPATH)/out/compiler.exe $(COMPILERPATH)/test/grammar.h $(COMPILERPATH)/test/grammar.cpp


test/test.exe: test/grammar.cpp
	g++ $(COMPILERPATH)/test/grammar.cpp -o $(COMPILERPATH)/test/test.exe
	cp $(COMPILERPATH)/out/compiler.exe bin/

ifneq ($(OS),Windows_NT)
	chmod +x bin/compiler.exe
endif

out/k65.exe : $(OBJECTS)
	g++ -o $@ $(OBJECTS)

obj/%.o : src/%.cpp $(HEADERS)
	g++ -c $(CXXFLAGS) -o obj/$*.o $<


src/gen/compiler.cpp : src/compiler.inc
	# Building K65 code parser
	$(COMPILER) src/compiler.inc src/gen/compiler.cpp

src/gen/compiler_evops.inl doc/wiki-eval-funcs.txt : src/gen_eval_ops.awk src/compiler_eval.cpp
	$(GAWK) -f src/gen_eval_ops.awk OUT=src/gen/compiler_evops.inl src/compiler_eval.cpp


# ------------------------------------------------ Test project ------------------------------------------------

a2600-tutorial-03.bin : out/k65.exe workdir/a2600-tutorial-03/files.lst workdir/a2600-tutorial-03/_defs.k65 workdir/a2600-tutorial-03/main.k65 workdir/a2600-tutorial-03/sprites.bmp
	cd workdir && ../out/k65.exe @a2600-tutorial-03/files.lst
