///////////////////////////////////////////////////
//
//Function name :RevTable
//Input : Integer
//Output : None
//Description : It is used to print table in reverse order.
//Author : Tejas A. Bora.
//Date : 7 Aug 2020
//
///////////////////////////////////////////////////

#include "Header.h"

void RevTable(int iNo)
{
    int iCnt = 0;
    int iAns = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    if (iNo != 0)
    {
        for (iCnt = 10; iCnt >= 1; iCnt--)
        {
            iAns = iNo * iCnt;
            printf("%d\t", iAns);
        }
    }
    else
    {
        printf("0");
    }
}