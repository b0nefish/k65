{"ADC"   ,ARG_IMM         ,0x69    ,2   ,2   },    //    ADC Imm
{"ADC"   ,ARG_ZP          ,0x65    ,2   ,3   },    //    ADC ZP
{"ADC"   ,ARG_ZP_X        ,0x75    ,2   ,4   },    //    ADC ZP,X
{"ADC"   ,ARG_ADDR        ,0x6D    ,3   ,4   },    //    ADC Addr
{"ADC"   ,ARG_ADDR_X      ,0x7D    ,3   ,4   },    //    ADC Addr,X
{"ADC"   ,ARG_ADDR_Y      ,0x79    ,3   ,4   },    //    ADC Addr,Y
{"ADC"   ,ARG_IND_X       ,0x61    ,2   ,6   },    //    ADC (Addr,X)
{"ADC"   ,ARG_IND_Y       ,0x71    ,2   ,5   },    //    ADC (Addr),Y
{"AND"   ,ARG_IMM         ,0x29    ,2   ,2   },    //    AND Imm
{"AND"   ,ARG_ZP          ,0x25    ,2   ,3   },    //    AND ZP
{"AND"   ,ARG_ZP_X        ,0x35    ,2   ,4   },    //    AND ZP,X
{"AND"   ,ARG_ADDR        ,0x2D    ,3   ,4   },    //    AND Addr
{"AND"   ,ARG_ADDR_X      ,0x3D    ,3   ,4   },    //    AND Addr,X
{"AND"   ,ARG_ADDR_Y      ,0x39    ,3   ,4   },    //    AND Addr,Y
{"AND"   ,ARG_IND_X       ,0x21    ,2   ,6   },    //    AND (Addr,X)
{"AND"   ,ARG_IND_Y       ,0x31    ,2   ,5   },    //    AND (Addr),Y
{"ASL"   ,ARG_ACC         ,0x0A    ,1   ,2   },    //    ASL Acc
{"ASL"   ,ARG_ZP          ,0x06    ,2   ,5   },    //    ASL ZP
{"ASL"   ,ARG_ZP_X        ,0x16    ,2   ,6   },    //    ASL ZP,X
{"ASL"   ,ARG_ADDR        ,0x0E    ,3   ,6   },    //    ASL Addr
{"ASL"   ,ARG_ADDR_X      ,0x1E    ,3   ,7   },    //    ASL Addr,X
{"BCC"   ,ARG_REL         ,0x90    ,2   ,2   },    //    BCC Rel
{"BCS"   ,ARG_REL         ,0xB0    ,2   ,2   },    //    BCS Rel
{"BEQ"   ,ARG_REL         ,0xF0    ,2   ,2   },    //    BEQ Rel
{"BIT"   ,ARG_ZP          ,0x24    ,2   ,3   },    //    BIT ZP
{"BIT"   ,ARG_ADDR        ,0x2C    ,3   ,4   },    //    BIT Addr
{"BMI"   ,ARG_REL         ,0x30    ,2   ,2   },    //    BMI Rel
{"BNE"   ,ARG_REL         ,0xD0    ,2   ,2   },    //    BNE Rel
{"BPL"   ,ARG_REL         ,0x10    ,2   ,2   },    //    BPL Rel
{"BRK"   ,ARG_IMPL        ,0x00    ,1   ,7   },    //    BRK none
{"BVC"   ,ARG_REL         ,0x50    ,2   ,2   },    //    BVC Rel
{"BVS"   ,ARG_REL         ,0x70    ,2   ,2   },    //    BVS Rel
{"CLC"   ,ARG_IMPL        ,0x18    ,1   ,2   },    //    CLC none
{"CLD"   ,ARG_IMPL        ,0xD8    ,1   ,2   },    //    CLD none
{"CLI"   ,ARG_IMPL        ,0x58    ,1   ,2   },    //    CLI none
{"CLV"   ,ARG_IMPL        ,0xB8    ,1   ,2   },    //    CLV none
{"CMP"   ,ARG_IMM         ,0xC9    ,2   ,2   },    //    CMP Imm
{"CMP"   ,ARG_ZP          ,0xC5    ,2   ,3   },    //    CMP ZP
{"CMP"   ,ARG_ZP_X        ,0xD5    ,2   ,4   },    //    CMP ZP,X
{"CMP"   ,ARG_ADDR        ,0xCD    ,3   ,4   },    //    CMP Addr
{"CMP"   ,ARG_ADDR_X      ,0xDD    ,3   ,4   },    //    CMP Addr,X
{"CMP"   ,ARG_ADDR_Y      ,0xD9    ,3   ,4   },    //    CMP Addr,Y
{"CMP"   ,ARG_IND_X       ,0xC1    ,2   ,6   },    //    CMP (Addr,X)
{"CMP"   ,ARG_IND_Y       ,0xD1    ,2   ,5   },    //    CMP (Addr),Y
{"CPX"   ,ARG_IMM         ,0xE0    ,2   ,2   },    //    CPX Imm
{"CPX"   ,ARG_ZP          ,0xE4    ,2   ,3   },    //    CPX ZP
{"CPX"   ,ARG_ADDR        ,0xEC    ,3   ,4   },    //    CPX Addr
{"CPY"   ,ARG_IMM         ,0xC0    ,2   ,2   },    //    CPY Imm
{"CPY"   ,ARG_ZP          ,0xC4    ,2   ,3   },    //    CPY ZP
{"CPY"   ,ARG_ADDR        ,0xCC    ,3   ,4   },    //    CPY Addr
{"DEC"   ,ARG_ZP          ,0xC6    ,2   ,5   },    //    DEC ZP
{"DEC"   ,ARG_ZP_X        ,0xD6    ,2   ,6   },    //    DEC ZP,X
{"DEC"   ,ARG_ADDR        ,0xCE    ,3   ,6   },    //    DEC Addr
{"DEC"   ,ARG_ADDR_X      ,0xDE    ,3   ,7   },    //    DEC Addr,X
{"DEX"   ,ARG_IMPL        ,0xCA    ,1   ,2   },    //    DEX none
{"DEY"   ,ARG_IMPL        ,0x88    ,1   ,2   },    //    DEY none
{"EOR"   ,ARG_IMM         ,0x49    ,2   ,2   },    //    EOR Imm
{"EOR"   ,ARG_ZP          ,0x45    ,2   ,3   },    //    EOR ZP
{"EOR"   ,ARG_ZP_X        ,0x55    ,2   ,4   },    //    EOR ZP,X
{"EOR"   ,ARG_ADDR        ,0x4D    ,3   ,4   },    //    EOR Addr
{"EOR"   ,ARG_ADDR_X      ,0x5D    ,3   ,4   },    //    EOR Addr,X
{"EOR"   ,ARG_ADDR_Y      ,0x59    ,3   ,4   },    //    EOR Addr,Y
{"EOR"   ,ARG_IND_X       ,0x41    ,2   ,6   },    //    EOR (Addr,X)
{"EOR"   ,ARG_IND_Y       ,0x51    ,2   ,5   },    //    EOR (Addr),Y
{"INC"   ,ARG_ZP          ,0xE6    ,2   ,5   },    //    INC ZP
{"INC"   ,ARG_ZP_X        ,0xF6    ,2   ,6   },    //    INC ZP,X
{"INC"   ,ARG_ADDR        ,0xEE    ,3   ,6   },    //    INC Addr
{"INC"   ,ARG_ADDR_X      ,0xFE    ,3   ,7   },    //    INC Addr,X
{"INX"   ,ARG_IMPL        ,0xE8    ,1   ,2   },    //    INX none
{"INY"   ,ARG_IMPL        ,0xC8    ,1   ,2   },    //    INY none
{"JMP"   ,ARG_ADDR        ,0x4C    ,3   ,3   },    //    JMP Addr
{"JMP"   ,ARG_IND         ,0x6C    ,3   ,5   },    //    JMP (Addr)
{"JSR"   ,ARG_ADDR        ,0x20    ,3   ,6   },    //    JSR Addr
{"LDA"   ,ARG_IMM         ,0xA9    ,2   ,2   },    //    LDA Imm
{"LDA"   ,ARG_ZP          ,0xA5    ,2   ,3   },    //    LDA ZP
{"LDA"   ,ARG_ZP_X        ,0xB5    ,2   ,4   },    //    LDA ZP,X
{"LDA"   ,ARG_ADDR        ,0xAD    ,3   ,4   },    //    LDA Addr
{"LDA"   ,ARG_ADDR_X      ,0xBD    ,3   ,4   },    //    LDA Addr,X
{"LDA"   ,ARG_ADDR_Y      ,0xB9    ,3   ,4   },    //    LDA Addr,Y
{"LDA"   ,ARG_IND_X       ,0xA1    ,2   ,6   },    //    LDA (Addr,X)
{"LDA"   ,ARG_IND_Y       ,0xB1    ,2   ,5   },    //    LDA (Addr),Y
{"LDX"   ,ARG_IMM         ,0xA2    ,2   ,2   },    //    LDX Imm
{"LDX"   ,ARG_ZP          ,0xA6    ,2   ,3   },    //    LDX ZP
{"LDX"   ,ARG_ZP_Y        ,0xB6    ,2   ,4   },    //    LDX ZP,Y
{"LDX"   ,ARG_ADDR        ,0xAE    ,3   ,4   },    //    LDX Addr
{"LDX"   ,ARG_ADDR_Y      ,0xBE    ,3   ,4   },    //    LDX Addr,Y
{"LDY"   ,ARG_IMM         ,0xA0    ,2   ,2   },    //    LDY Imm
{"LDY"   ,ARG_ZP          ,0xA4    ,2   ,3   },    //    LDY ZP
{"LDY"   ,ARG_ZP_X        ,0xB4    ,2   ,4   },    //    LDY ZP,X
{"LDY"   ,ARG_ADDR        ,0xAC    ,3   ,4   },    //    LDY Addr
{"LDY"   ,ARG_ADDR_X      ,0xBC    ,3   ,4   },    //    LDY Addr,X
{"LSR"   ,ARG_ACC         ,0x4A    ,1   ,2   },    //    LSR Acc
{"LSR"   ,ARG_ZP          ,0x46    ,2   ,5   },    //    LSR ZP
{"LSR"   ,ARG_ZP_X        ,0x56    ,2   ,6   },    //    LSR ZP,X
{"LSR"   ,ARG_ADDR        ,0x4E    ,3   ,6   },    //    LSR Addr
{"LSR"   ,ARG_ADDR_X      ,0x5E    ,3   ,7   },    //    LSR Addr,X
{"NOP"   ,ARG_IMPL        ,0xEA    ,1   ,2   },    //    NOP none
{"ORA"   ,ARG_IMM         ,0x09    ,2   ,2   },    //    ORA Imm
{"ORA"   ,ARG_ZP          ,0x05    ,2   ,3   },    //    ORA ZP
{"ORA"   ,ARG_ZP_X        ,0x15    ,2   ,4   },    //    ORA ZP,X
{"ORA"   ,ARG_ADDR        ,0x0D    ,3   ,4   },    //    ORA Addr
{"ORA"   ,ARG_ADDR_X      ,0x1D    ,3   ,4   },    //    ORA Addr,X
{"ORA"   ,ARG_ADDR_Y      ,0x19    ,3   ,4   },    //    ORA Addr,Y
{"ORA"   ,ARG_IND_X       ,0x01    ,2   ,6   },    //    ORA (Addr,X)
{"ORA"   ,ARG_IND_Y       ,0x11    ,2   ,5   },    //    ORA (Addr),Y
{"PHA"   ,ARG_IMPL        ,0x48    ,1   ,3   },    //    PHA none
{"PHP"   ,ARG_IMPL        ,0x08    ,1   ,3   },    //    PHP none
{"PLA"   ,ARG_IMPL        ,0x68    ,1   ,4   },    //    PLA none
{"PLP"   ,ARG_IMPL        ,0x28    ,1   ,4   },    //    PLP none
{"ROL"   ,ARG_ACC         ,0x2A    ,1   ,2   },    //    ROL Acc
{"ROL"   ,ARG_ZP          ,0x26    ,2   ,5   },    //    ROL ZP
{"ROL"   ,ARG_ZP_X        ,0x36    ,2   ,6   },    //    ROL ZP,X
{"ROL"   ,ARG_ADDR        ,0x2E    ,3   ,6   },    //    ROL Addr
{"ROL"   ,ARG_ADDR_X      ,0x3E    ,3   ,7   },    //    ROL Addr,X
{"ROR"   ,ARG_ACC         ,0x6A    ,1   ,2   },    //    ROR Acc
{"ROR"   ,ARG_ZP          ,0x66    ,2   ,5   },    //    ROR ZP
{"ROR"   ,ARG_ZP_X        ,0x76    ,2   ,6   },    //    ROR ZP,X
{"ROR"   ,ARG_ADDR        ,0x6E    ,3   ,6   },    //    ROR Addr
{"ROR"   ,ARG_ADDR_X      ,0x7E    ,3   ,7   },    //    ROR Addr,X
{"RTI"   ,ARG_IMPL        ,0x40    ,1   ,6   },    //    RTI none
{"RTS"   ,ARG_IMPL        ,0x60    ,1   ,6   },    //    RTS none
{"SBC"   ,ARG_IMM         ,0xE9    ,2   ,2   },    //    SBC Imm
{"SBC"   ,ARG_ZP          ,0xE5    ,2   ,3   },    //    SBC ZP
{"SBC"   ,ARG_ZP_X        ,0xF5    ,2   ,4   },    //    SBC ZP,X
{"SBC"   ,ARG_ADDR        ,0xED    ,3   ,4   },    //    SBC Addr
{"SBC"   ,ARG_ADDR_X      ,0xFD    ,3   ,4   },    //    SBC Addr,X
{"SBC"   ,ARG_ADDR_Y      ,0xF9    ,3   ,4   },    //    SBC Addr,Y
{"SBC"   ,ARG_IND_X       ,0xE1    ,2   ,6   },    //    SBC (Addr,X)
{"SBC"   ,ARG_IND_Y       ,0xF1    ,2   ,5   },    //    SBC (Addr),Y
{"SEC"   ,ARG_IMPL        ,0x38    ,1   ,2   },    //    SEC none
{"SED"   ,ARG_IMPL        ,0xF8    ,1   ,2   },    //    SED none
{"SEI"   ,ARG_IMPL        ,0x78    ,1   ,2   },    //    SEI none
{"STA"   ,ARG_ZP          ,0x85    ,2   ,3   },    //    STA ZP
{"STA"   ,ARG_ZP_X        ,0x95    ,2   ,4   },    //    STA ZP,X
{"STA"   ,ARG_ADDR        ,0x8D    ,3   ,4   },    //    STA Addr
{"STA"   ,ARG_ADDR_X      ,0x9D    ,3   ,5   },    //    STA Addr,X
{"STA"   ,ARG_ADDR_Y      ,0x99    ,3   ,5   },    //    STA Addr,Y
{"STA"   ,ARG_IND_X       ,0x81    ,2   ,6   },    //    STA (Addr,X)
{"STA"   ,ARG_IND_Y       ,0x91    ,2   ,6   },    //    STA (Addr),Y
{"STX"   ,ARG_ZP          ,0x86    ,2   ,3   },    //    STX ZP
{"STX"   ,ARG_ZP_Y        ,0x96    ,2   ,4   },    //    STX ZP,Y
{"STX"   ,ARG_ADDR        ,0x8E    ,3   ,4   },    //    STX Addr
{"STY"   ,ARG_ZP          ,0x84    ,2   ,3   },    //    STY ZP
{"STY"   ,ARG_ZP_X        ,0x94    ,2   ,4   },    //    STY ZP,X
{"STY"   ,ARG_ADDR        ,0x8C    ,3   ,4   },    //    STY Addr
{"TAX"   ,ARG_IMPL        ,0xAA    ,1   ,2   },    //    TAX none
{"TAY"   ,ARG_IMPL        ,0xA8    ,1   ,2   },    //    TAY none
{"TSX"   ,ARG_IMPL        ,0xBA    ,1   ,2   },    //    TSX none
{"TXA"   ,ARG_IMPL        ,0x8A    ,1   ,2   },    //    TXA none
{"TXS"   ,ARG_IMPL        ,0x9A    ,1   ,2   },    //    TXS none
{"TYA"   ,ARG_IMPL        ,0x98    ,1   ,2   },    //    TYA none
