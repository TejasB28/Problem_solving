////////////////////////////////////////////////////
//
//Function Name : ToggleBit
//Input : unsigned int,int
//Output : unsigned int
//Description : It is used to toggle first and last nibble.
//Author : Tejas A. Bora
//Date : 4 Sep 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

UINT ToggleBit(UINT uNo)
{
    int iMask = 0XF000000F;
    UINT uResult = 0;

    uResult = uNo ^ iMask;

    return uResult;
}
