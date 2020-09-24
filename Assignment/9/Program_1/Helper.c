///////////////////////////////////////////
//
//Function Name :  Pattern
//Input : Integer
//Output : None
//Description :it is used to print "$ *" upto the input number.
//Author : Tejas A. Bora
//Date : 7 Aug 2020
//
/////////////////////////////////////////////

#include "Header.h"

void Pattern(int iValue)
{
    int iCnt = 0;
    if (iValue < 0)
    {
        iValue = -iValue;
    }
    if (iValue == 0)
    {
        printf("Enter Valid input\n");
    }
    for (iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("$\t*\t");
    }
}