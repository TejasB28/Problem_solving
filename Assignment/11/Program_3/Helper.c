////////////////////////////////////////////////////////
//
//Function Name :RangeSum
//Input : int,int
//Output : int
//Description : It is used to print addition of the number in the range.
//Author : Tejas A. Bora
//Date : 8 Aug 2020
//
//////////////////////////////////////////////////////////

#include "Header.h"

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    if ((iStart > iEnd) || (iStart < 0))
    {
        return -1;
    }
    else
    {
        for (iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
