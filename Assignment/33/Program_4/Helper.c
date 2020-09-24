////////////////////////////////////////////////////
//
//Function Name : ToggleBit
//Input : unsigned int
//Output : unsigned int
//Description : It is used to toggle 7th and 10th bit of that number.
//Author : Tejas A. Bora
//Date : 4 Sep 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

UINT ToggleBit(UINT uNO)
{
    UINT uMask = 0X00000240;
    UINT uResult = 0;

    uResult = uNO ^ uMask;

    return uResult;
}