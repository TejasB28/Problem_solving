/////////////////////////////////////////////////////////
//
//Function Name : RangeSumEven
//Input : Interger,Integer
//Output : integer
//Description : It is used to print addition of even numbers between range.
//Author : Tejas A. Bora
//Date : 8 Aug 2020
//
//////////////////////////////////////////////////////////

#include "Header.h"

int RangeSumEven(int iStart, int iEnd)
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
            if ((iCnt % 2) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
    }
    return iSum;
}