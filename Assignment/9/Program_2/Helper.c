//////////////////////////////////////////////////////
//
//Function Name :Display
//Input : Integer
//Output : None
//Description : It is used to display number upto the input number.
//Author : Tejas A. Bora
//Date : 7 Aug 2020
//
////////////////////////////////////////////////////////

#include "Header.h"

void Display(int iNo)
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
        printf("%d\t", iCnt);
    }
}