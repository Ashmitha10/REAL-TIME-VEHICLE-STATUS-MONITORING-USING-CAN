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
void CAN1_Tx(CANF);
u8 CAN1_Rx(CANF *);

void left_indication(void);
void right_indication(void);

void led_off(void);
void Init_LED(void);
void left_indicator(void);
void right_indicator(void); 

void airbag_trigger(void);
