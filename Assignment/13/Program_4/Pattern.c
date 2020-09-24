////////////////////////////////////////////////////////
//
//Function Name : Pattern
//Input : Integer
//Output : none
//Description : It is used to print pattern(# 1 * # 2 * # 3 * # 4 *).
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
        printf("0");
    }
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t%d\t*\t", iCnt);
    }
}
