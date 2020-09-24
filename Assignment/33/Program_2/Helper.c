////////////////////////////////////////////////////
//
//Function Name : OffBit
//Input : unsigned int
//Output : unsigned int
//Description : It is used to off 7th and 10th bit of that number if it is on.
//Author : Tejas A. Bora
//Date : 4 Sep 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

UINT OffBit(UINT iNo)
{
    int iMask = 0X00000240;
    int iResult = 0;

    iResult = iNo & iMask;

    if (iResult == iMask)
    {
        iResult = iNo ^ iMask;
    }
    else
    {
        iResult = -1;
    }
    return iResult;
}