//////////////////////////////////////////////////////
//
//Function Name :OddDisplay
//Input : Integer
//Output : None
//Description : It is used to display odd numbers.
//Author : Tejas A. Bora
//Date : 8 Aug 2020
//
///////////////////////////////////////////////////////

#include "Header.h"

void OddDisplay(int iNo)
{
    int iCnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    if (iNo == 0)
    {
        printf("0");
    }
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}