/***************************************************************************/
/*                                                                         */
/*    A simple program to read the keypad                                  */
/*                                                                         */
/***************************************************************************/


/***  Include Files  *******************************************************/

#include <t89c51ac3.h>



/**  Main Function  ********************************************************/

void main()
{
  int Key = 0;
	P2_0 = TRUE;
	P2_1 = TRUE;
	P2_2 = TRUE;
	P2_3 = TRUE;
	
	P2_0 = FALSE;
	if(!P2_4) Key = 1;
	if(!P2_5) Key = 2;
	if(!P2_6) Key = 3;
	
	P2_1 = FALSE;
	if(!P2_4) Key = 4;
	if(!P2_5) Key = 5;
	if(!P2_6) Key = 6;
	
	P2_2 = FALSE;
	if(!P2_4) Key = 7;
	if(!P2_5)	Key = 8;
	if(!P2_6) Key = 9;
	
	P2_3 = FALSE;
	//if(!P2_4) Key = 1;
	if(!P2_5) Key = 0;
	//if(!P2_6) Key = 3;
	
}
