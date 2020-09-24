/////////////////////////////////////////////////////////////
//
//Function Name : Count
//Input : Integer
//Output : Integer
//Description : It is used to count number of digits less than 6 in number.
//Author : Tejas A. Bora
//Date : 5 Aug 2020
//
///////////////////////////////////////////////////////////////

#include "Header.h"

int Count(int iValue)
{
    int iDigit = 0;
    int iCnt = 0;
    if (iValue < 0)
    {
        iValue = -iValue;
    }
    while (iValue != 0)
    {
        iDigit = iValue % 10;
        if (iDigit < 6)
        {
            iCnt++;
        }
        iValue = iValue / 10;
    }
    return iCnt;
}