///////////////////////////////////////////////////
//
//Function Name : Display
//Input : Integer
//Output : none
//Description : It is used to print number line.
//Author : Tejas A. Bora
//Date : 8 Aug 2020
//
////////////////////////////////////////////////////

#include "Header.h"

void Display(int iNo)
{
    int iCnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    if (iNo != 0)
    {
        for (iCnt = -iNo; iCnt <= iNo; iCnt++)
        {
            printf("%d\t", iCnt);
        }
    }
    else
    {
        printf("0");
    }
}