////////////////////////////////////////////////////
//
//Function Name : OffBit
//Input : unsigned int,int
//Output : unsigned int
//Description : It is used to off the bit as per given position.
//Author : Tejas A. Bora
//Date : 4 Sep 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

UINT OffBit(UINT uNo, int iPos)
{
    int iMask = 0X00000001;
    UINT uResult = 0;

    if (iPos < 1 || iPos > 32)
    {
        return -1;
    }

    iMask = iMask << iPos - 1;

    uResult = uNo & iMask;

    if (uResult == iMask)
    {
        uResult = iMask ^ uNo;
    }
    else
    {
        return -2;
    }

    return uResult;
}