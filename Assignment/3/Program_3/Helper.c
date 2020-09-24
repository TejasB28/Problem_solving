//////////////////////////////////////////////////
//
//Function Name :   PrintEvenFact
//Parameters :      Integer
//Return value :    None
//Description :     It is used to display even factors of given number.
//Author :          Tejas A. Bora
//Date :            2 Aug 2020
//
//////////////////////////////////////////////////

#include "Header.h"

void PrintEvenFact(int iValue)
{
    int iCnt = 0;

    if (iValue < 0)
    {
        iValue = -iValue;
    }
    if (iValue == 0)
    {
        printf("0");
    }
    for (iCnt = 1; iCnt <= iValue / 2; iCnt++)
    {
        if (((iValue % iCnt) == 0) && ((iCnt % 2) == 0))
        {
            printf("%d\t", iCnt);
        }
    }
}