#include "types.h"

// Definition of CAN frame structure
typedef struct CAN_Frame
{
   u32 ID;// Stores CAN message identifier

   struct BitField
   {
      // Remote Transmission Request bit
      // 0 -> Data frame
      // 1 -> Remote frame
      u32 RTR : 1;
     // Data Length Code
    // Specifies number of data bytes (0 to 8)
	    u32 DLC : 4;
      // Frame Format bit
      // 0 -> Standard frame
      // 1 -> Extended frame
	    u32 FF : 1;
   }bfv; // Creates structure variable named bfv
 // Stores CAN data bytes
   // DATA1 -> first 4 bytes
   // DATA2 -> next 4 bytes
   u32 DATA1,DATA2;
}CANF;// CANF becomes alias name for struct CAN_Frame

// Function to initialize CAN1 peripheral
void Init_CAN1(void);
// Function to transmit CAN frame
void CAN1_Tx(CANF);
// Function to receive CAN frame
u8 CAN1_Rx(CANF *);

// Function for left indication operation
void left_indication(void);

// Function for right indication operation
void right_indication(void);

// Function to turn OFF all LEDs
void led_off(void);

// Function to initialize LEDs
void Init_LED(void);

// Function to activate left indicator
void left_indicator(void);

// Function to activate right indicator LED
void right_indicator(void); 

// Function to trigger airbag indication/action
void airbag_trigger(void);
