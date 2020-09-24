/////////////////////////////////////////////////
//
//Function Name : OffBit
//Input : unsigned int
//Output : unsigned int
//Description : It is used to off 7th bit of that number if it is on.
//Author : Tejas A. Bora
//Date : 4 Sep 2020
//
///////////////////////////////////////////////////

#include "Header.h"

UINT OffBit(UINT iValue)
{
    int iMask = 0X00000040;
    int iResult = 0;

    iResult = iValue & iMask;

    if (iResult == iMask)
    {
        iResult = iValue ^ iMask;
    }
    else
    {
        iResult = -1;
    }
    return iResult;
}