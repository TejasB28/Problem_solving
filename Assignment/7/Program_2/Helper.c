/////////////////////////////////////////////////////////////
//
//Function Name : CountOdd
//Input : Integer
//Output : Integer
//Description : It is used to count odd numbers.
//Author : Tejas A. Bora
//Date : 5 Aug 2020
//
///////////////////////////////////////////////////////////////

#include "Header.h"

int CountOdd(int iValue)
{
    int iDigit = 0;
    int iCnt = 0;
    while (iValue != 0)
    {
        iDigit = iValue % 10;

        if ((iDigit % 2) != 0) // if((iDigit %2)==1)-> It affect on negative numbers.
        {

            iCnt++;
        }
        iValue = iValue / 10;
    }
    return iCnt;
}