///////////////////////////////////////////////////////////
//
//Function Name : MultipleDisplay
//Input : Integer
//Output : None
//Description : It is used to display first 5 multiples.
//Author : Tejas A. Bora
//Date : 8 Aug 2020
//
///////////////////////////////////////////////////////////

#include "Header.h"

void MultipleDisplay(int iValue)
{
    int iCnt = 0;
    int iAns = 0;
    if (iValue < 0)
    {
        iValue = -iValue;
    }
    if (iValue != 0)
    {
        for (iCnt = 1; iCnt <= 5; iCnt++)
        {
            iAns = iValue * iCnt;
            printf("%d\t", iAns);
        }
    }
    else
    {
        printf("0");
    }
}