//set abit
#define SETBIT(WORD,BP) WORD |= (1<<BP)
//clear a bit
#define CLEARBIT(WORD,BP) WORD &= ~(1<<BP)
// Write a bit at given position
#define WRITEBIT(WORD,BP,BIT) WORD = ((WORD&~(1<<BP))|(BIT<<BP))
// Write 4-bit nibble at starting bit position
#define WRITENIBBLE(WORD,SBP,NIB_DATA) WORD=((WORD&~(0x0F<<SBP))|(NIB_DATA<<SBP))
// Write 8-bit byte at starting bit position
#define WRITEBYTE(WORD,SBP,BYTE_DATA) WORD = ((WORD&~(0XFF<<SBP))|(BYTE_DATA<<SBP))
// Write 16-bit half word at starting bit position
#define WRITEHWORD(WORD,SBP,HWORD) WORD = ((WORD&~(0XFFFF<<SBP))|(HWORD<<SBP))
//read a bit
#define READBIT(WORD,BP) WORD = ((WORD>>BP)&1)
