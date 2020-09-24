///////////////////////////////////////////////////////////////
//
//Function Name : Factorial
//Input : Integer
//Output : Integer
//Description : it is used find factorial of number.
//Author : Tejas A. Bora
//Date : 7 Aug 2020
//
////////////////////////////////////////////////////////////////

#include "Header.h"

int Factorial(int iValue) //4
{
    int iCnt = 0;
    int iFact = 1; // 1  4  12  24

    if (iValue < 0)
    {
        iValue = -iValue;
    }
    if (iValue == 0)
    {
        return 0;
    }
    for (iCnt = iValue; iCnt >= 2; iCnt--) //4 3 2 1
    {
        iFact = iFact * iCnt;
    }
    return iFact; //24
}