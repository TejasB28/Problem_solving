///////////////////////////////////////////////////////////
//
//Function Name : RangeDisplay
//Input : Integer,Integer
//Output : none
//Description : it is used to display the number between the range
//Author : Tejas A.Bora
//Date : 8 Aug 2020
//
/////////////////////////////////////////////////////////////

#include "Header.h"

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    if (iStart > iEnd)
    {
        printf("Invalid Range.!");
    }
    else
    {
        for (iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            printf("%d\t", iCnt);
        }
    }
}