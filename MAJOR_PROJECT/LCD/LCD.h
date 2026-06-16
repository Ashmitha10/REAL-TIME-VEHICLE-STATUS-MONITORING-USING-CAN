#include "types.h"
// Function declaration to initialize the LCD display
void InitLCD(void);

// Function declaration to send a command to LCD
void CmdLCD(u8);

// Function declaration to display a single character on LCD
void CharLCD(s8);

// Function declaration to display data/character on LCD
void DispLCD(u8);

// Function declaration to display a string on LCD
void StrLCD(s8 *);

// Function declaration to display an integer value on LCD
void IntLCD(s32);

// Function declaration to display a floating-point number on LCD
void FloatLCD(f32,u32);

// Function declaration to write custom characters into LCD CGRAM
void WriteToCGRAM(void);

// Function declaration to display hexadecimal data on LCD
void Hex_data(u32 value);
