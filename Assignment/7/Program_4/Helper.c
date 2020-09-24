/////////////////////////////////////////////////////////
//
//Function Name : MultiDigits
//Input :Integer
//output : Integer
//Description : It is used to multiply number of digits.
//Author : Tejas A. Bora
//Date: 5 Aug 2020
//
/////////////////////////////////////////////////////////
#include "Header.h"

int MultiDigits(int iValue)
{
    int iDigit = 0;
    int iMult = 1;
    if (iValue == 0) // Fliter to handle 0 as input
    {
        return 0;
    }
    if (iValue < 0)
    {
        iValue = -iValue;
    }
    while (iValue != 0)
    {
        iDigit = iValue % 10;
        // if (iDigit == 0)
        // {
        //     iDigit = 1;
        // }
        // iMult = iMult * iDigit;
        if (iDigit != 0)
        {
            iMult = iMult * iDigit;
        }

        iValue = iValue / 10;
    }
    return iMult;
}