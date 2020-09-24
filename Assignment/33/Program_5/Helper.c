////////////////////////////////////////////////////
//
//Function Name : OnBit
//Input : unsigned int
//Output : unsigned int
//Description : It is used to ON first 4 bits.
//Author : Tejas A. Bora
//Date : 4 Sep 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

UINT OnBit(UINT uNo)
{
    UINT uMask = 0X0000000f;
    UINT uResult = 0;

    uResult = uNo | uMask;

    return uResult;
}