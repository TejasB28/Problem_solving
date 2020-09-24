/////////////////////////////////////////////////////////////
//
//Function Name : CountEven
//Input : Integer
//Output : Integer
//Description : It is used to count even numbers.
//Author : Tejas A. Bora
//Date : 5 Aug 2020
//
///////////////////////////////////////////////////////////////

#include "Header.h"

int CountEven(int iValue)
{
    int iDigit = 0;
    int iCnt = 0;
    while (iValue != 0)
    {
        iDigit = iValue % 10;

        if ((iDigit % 2) == 0)
        {

            iCnt++;
        }
        iValue = iValue / 10;
    }
    return iCnt;
}