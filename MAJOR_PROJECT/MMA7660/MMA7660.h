#include "types.h"

// Function declaration to initialize the MMA7660 accelerometer sensor
void Init_mma7660(void);

// Function declaration to read data from a specific MMA7660 register
u8 mma7660_read(u8 reg);

// Function declaration to write data into a specific MMA7660 register
void mma7660_write(u8 reg, u8 data);

// Function declaration to get X-axis acceleration data
s8 mma7660_get_x(void);

// Function declaration to get Y-axis acceleration data
s8 mma7660_get_y(void);

// Function declaration to get Z-axis acceleration data
s8 mma7660_get_z(void);
//void airbag_trigger(void);
