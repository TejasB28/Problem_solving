//////////////////////////////////////////////////////////
//
//Function Name : RangeDisplayEven
//Input : integer,integer
//Output : none
//Description : it is used to print even numbers from the range
//Author : Tejas A. Bora
//Date : 8 Aug 2020
//
////////////////////////////////////////////////////////////
#include "Header.h"

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;
    if (iStart > iEnd)
    {
        printf("Invalid Range..!");
    }
    else
    {
        for (iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            if ((iCnt % 2 == 0))
            {
                printf("%d\t", iCnt);
            }
        }
    }
}