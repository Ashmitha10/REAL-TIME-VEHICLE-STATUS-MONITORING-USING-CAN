#ifndef I2C_H // Checks whether I2C_H is already defined or not
#define I2C_H // Defines I2C_H to avoid multiple inclusion of this header file


#include "types.h" // Includes user-defined data types like u8, u16, u32
// Function declaration to initialize the I2C peripheral
void Init_i2c(void);

// Function declaration to generate I2C START condition
void i2c_start(void);

// Function declaration to generate I2C REPEATED START condition
void i2c_restart(void);

// Function declaration to generate I2C STOP condition
void i2c_stop(void);

// Function declaration to send/write one byte of data through I2C
void i2c_write(u8 data);

// Function declaration to read a byte and send NACK (No Acknowledge)
u8 i2c_nack(void);

// Function declaration to read a byte and send ACK (Master Acknowledge)
u8 i2c_mack(void);

// Ends the header guard condition
#endif
