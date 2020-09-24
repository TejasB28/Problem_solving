////////////////////////////////////////////////////
//
//Function Name : OnBit
//Input : unsigned int,int
//Output : unsigned int
//Description : It is used to on the bit as per given position.
//Author : Tejas A. Bora
//Date : 4 Sep 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

UINT OnBit(UINT uNo, int iPos)
{
    int iMask = 0X00000001;
    UINT uResult = 0;

    if (iPos < 1 || iPos > 32)
    {
        return -1;
    }

    iMask = iMask << iPos - 1;

    uResult = iMask & uNo;

    if (uResult == iMask)
    {
        return -2;
    }
    else
    {
        uResult = iMask ^ uNo;
    }
    return uResult;
}