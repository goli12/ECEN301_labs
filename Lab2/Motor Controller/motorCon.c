/***************************************************************************/
/*                                                                         */
/*    A program to generate a sine wave using the DAC module               */
/*                                                                         */
/***************************************************************************/


/***  Include Files  *******************************************************/

#include <t89c51ac3.h>
#include <math.h>

#define PI 3.141592

//P4 - IO module
//P1 - motor

int value;



/**  Main Function  ********************************************************/


void main()
{
	//P1 = P0
//	output = P0 - 127;
//	P2 = output;
	//
	P1 = P0 + 127;
	
	
}