/////////////////////////////////////////////////////////////
//
//Function Name : CountTwo
//Input : Integer
//Output : Integer
//Description : It is used to count 2's in number.
//Author : Tejas A. Bora
//Date : 5 Aug 2020
//
///////////////////////////////////////////////////////////////

#include "Header.h"

int CountTwo(int iValue)
{
    int iDigit = 0;
    int iCnt = 0;
    while (iValue != 0)
    {
        iDigit = iValue % 10;
        if ((iDigit == 2) || (iDigit == -2))
        {
            iCnt++;
        }
        iValue = iValue / 10;
    }
    return iCnt;
}