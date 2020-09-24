////////////////////////////////////////////////////////////
//
//Function Name :   FactRev
//Parameters :      Interger
//Return value :    none
//Description :     It is used to print factors in reverse order.
//Author :          Tejas A. Bora
//Date :            2 Aug 2020
//
/////////////////////////////////////////////////////////////

#include "Header.h"

void FactRev(int iValue)
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
    for (iCnt = iValue / 2; iCnt >= 1; iCnt--)
    {
        if ((iValue % iCnt) == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}
///////////////////////////////////////////////////////
//Time Complexity :O(N/2)
///////////////////////////////////////////////////////