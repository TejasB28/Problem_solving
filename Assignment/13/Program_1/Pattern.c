////////////////////////////////////////////////////////
//
//Function Name : Pattern
//Input : Integer
//Output : none
//Description : It is used to print pattern(A B C D E).
//Author : Tejas A. Bora
//date : 12 Aug 2020
//
//////////////////////////////////////////////////////////

#include "Header.h"

void Pattern(int iNo)
{
    int iCnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    if (iNo == 0)
    {
        printf("Invalid");
    }
    else
    {
        for (iCnt = 1; iCnt <= iNo; iCnt++)
        {
            printf("%c\t", 64 + iCnt);
        }
    }
}