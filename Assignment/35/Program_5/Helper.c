////////////////////////////////////////////////////
//
//Function Name : ToggleBitRange
//Input : unsigned int,int,int
//Output : unsigned int
//Description : It is used to toggle all bits in range of number.
//Author : Tejas A. Bora
//Date : 5 Sep 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    int iMask = 0X000000001;

    iMask = iMask << iStart - 1;

    while (iStart <= iEnd)
    {
        iNo = iNo ^ iMask;

        iMask = iMask << 1;
        iStart++;
    }
    return iNo;
}