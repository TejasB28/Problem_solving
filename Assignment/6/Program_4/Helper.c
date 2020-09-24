/////////////////////////////////////////////////////////////
//
//Function Name : CountFour
//Input : Integer
//Output : Integer
//Description : It is used to count 4's in number.
//Author : Tejas A. Bora
//Date : 5 Aug 2020
//
///////////////////////////////////////////////////////////////

#include "Header.h"

int CountFour(int iValue)
{
    int iDigit = 0;
    int iCnt = 0;
    while (iValue != 0)
    {
        iDigit = iValue % 10;
        if (iDigit == 4 || iDigit == -4)
        {
            iCnt++;
        }
        iValue = iValue / 10;
    }
    return iCnt;
}