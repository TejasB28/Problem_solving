//////////////////////////////////////////////////
//
//Function Name :   PrintFact
//Parameters :      Integer
//Return value :    None
//Description :     It is used to display factors of given number.
//Author :          Tejas A. Bora
//Date :            2 Aug 2020
//
//////////////////////////////////////////////////

#include "Header.h"

void PrintFact(int iValue)
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
    if (iValue == 1)
    {
        printf("1");
    }
    for (iCnt = 1; iCnt <= iValue / 2; iCnt++)
    {
        if (((iValue % iCnt) == 0))
        {
            printf("%d\t", iCnt);
        }
    }
}