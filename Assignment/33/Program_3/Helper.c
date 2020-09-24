////////////////////////////////////////////////////
//
//Function Name : ToggleBit
//Input : unsigned int
//Output : unsigned int
//Description : It is used to toggle 7th bit of that number.
//Author : Tejas A. Bora
//Date : 4 Sep 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

UINT ToggleBit(UINT iNo)
{
    int iMask = 0X00000040;
    UINT uResult = 0;

    uResult = iNo ^ iMask;

    return uResult;
}
