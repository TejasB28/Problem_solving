/////////////////////////////////////////////////////////
//
//Function Name :ChkZero
//Input : Integer
//Output : Boolean
//Description : it is used to check number contains zero or not
//Author : Tejas A. Bora
//Date : 5 Aug 2020
//
/////////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkZero(int iValue)
{
    int iDigit = 0;
    while (iValue != 0)
    {
        iDigit = iValue % 10;
        if (iDigit == 0)
        {
            break; //Loop madhe return karayacha nahi
        }

        iValue = iValue / 10;
    }
    if (iDigit == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}