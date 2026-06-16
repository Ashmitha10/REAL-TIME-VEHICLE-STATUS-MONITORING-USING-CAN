// Checks whether __TYPES_H__ is already defined or not
// Prevents multiple inclusion of this header file
#ifndef __TYPES_H__
// Defines __TYPES_H__ so file is included only once
#define __TYPES_H__

// Unsigned 8-bit data type
// Range: 0 to 255
typedef unsigned char u8;

// Signed 8-bit data type
// Range: -128 to 127
typedef signed char s8;

// Unsigned 16-bit data type
// Range: 0 to 65535
typedef unsigned short u16;

// Signed 16-bit data type
// Range: -32768 to 32767
typedef signed short s16;

// Unsigned 32-bit data type
// Range: 0 to 4294967295
typedef unsigned int u32;

// Signed 32-bit data type
// Range: -2147483648 to 2147483647
typedef signed int s32;

// 32-bit floating point type
// Used for decimal values
typedef float f32;

// 64-bit floating point type
// Provides higher precision decimal values
typedef double f64;

// Ends the header guard
#endif
