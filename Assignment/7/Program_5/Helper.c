/////////////////////////////////////////////////////////
//
//Function Name : CountDiff
//Input :Integer
//output : Integer
//Description : It is used to find differnce between addition of even digits and odd digits.
//Author : Tejas A. Bora
//Date: 5 Aug 2020
//
/////////////////////////////////////////////////////////
#include "Header.h"

int CountDiff(int iValue)
{
    int iDigit = 0;
    int iEven = 0;
    int iOdd = 0;
    int iSum = 0;
    int iAns = 0;
    if (iValue < 0)
    {
        iValue = -iValue;
    }
    while (iValue != 0)
    {
        iDigit = iValue % 10;
        if (iDigit % 2 == 0)
        {
            iSum = iSum + iDigit;
        }
        else
        {
            iSum = iSum - iDigit;
        }
        iValue = iValue / 10;
    }
    //iAns = iEven - iOdd;
    return iSum;
}