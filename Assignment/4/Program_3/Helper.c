////////////////////////////////////////////////////////////
//
//Function Name :   NonFact
//Parameters :      Interger
//Return value :    none
//Description :     It is used to print non factors of input number.
//Author :          Tejas A. Bora
//Date :            2 Aug 2020
//
/////////////////////////////////////////////////////////////

#include "Header.h"

void NonFact(int iValue)
{
    int iCnt = 0;
    if (iValue < 0)
    {
        iValue = -iValue;
    }
    if (iValue == 0 || iValue == 1)
    {
        printf("Not Valid!\n");
    }
    for (iCnt = 1; iCnt <= iValue; iCnt++)
    {
        if ((iValue % iCnt) != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}
////////////////////////////////////////////////
//Time Complexity : O(N)
//////////////////////////////////////////////