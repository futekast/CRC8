
//------------------------------------------------------------------------------ 
// 	Function Name:		CRC8 Table
// 	Description: 		This subroutine contains the crc table required
//						for the crc8 calculation.
// 	Parameters:	 		None 
// 	Returns: 			None
//------------------------------------------------------------------------------
extern uint8_t const crcTable[256];
 
//------------------------------------------------------------------------------ 
// 	Function Name:		CRC8 Function
// 	Description: 		This subroutine calculates the CRC8 for the provided 
//						buffer based on the number of bytes passed via length 
//						and returns it.
// 	Parameters:	 		p:			Data pointer
//						length:		Number of bytes 
// 	Returns: 			None
//------------------------------------------------------------------------------
uint8_t crc8(uint8_t *p, uint8_t length);
