/////////////////////////////////////////////////////////
//
//Function Name : CountRange
//Input :Integer
//output : Integer
//Description : It is used to find count of digits between 3 and 7.
//Author : Tejas A. Bora
//Date: 5 Aug 2020
//
/////////////////////////////////////////////////////////
#include "Header.h"

int CountRange(int iValue)
{
    int iDigit = 0;
    int iCnt = 0;
    while (iValue != 0)
    {
        iDigit = iValue % 10;
        if (iDigit > 3 && iDigit < 7)
        {
            iCnt++;
        }
        iValue = iValue / 10;
    }
    return iCnt;
}