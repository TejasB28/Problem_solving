//////////////////////////////////////////////////////
//
//Function Name : RangeDisplayRev
//Input : Integer,Integer
//Output : none
//Description : It i used to print the numbers of range in reverse order
//Author : Tejas A. Bora
//Date : 8 Aug 2020
//
//////////////////////////////////////////////////////

#include "Header.h"

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;
    if (iStart > iEnd)
    {
        printf("Invalid Range..!");
    }
    else
    {
        for (iCnt = iEnd; iCnt >= iStart; iCnt--)
        {
            printf("%d\t", iCnt);
        }
    }
}