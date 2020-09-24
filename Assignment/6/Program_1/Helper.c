///////////////////////////////////////////////////
//
//Function Name : DisplayDigit
//Input :Integer
//Output : none
//Description : It is used to display number in reverse order
//Author : Tejas A. Bora
//Date :5 Aug 2020
//
////////////////////////////////////////////////////
#include "Header.h"

void DisplayDigit(int iValue)
{
    int iDigit = 0;

    if (iValue < 0)
    {
        iValue = -iValue;
    }
    while (iValue != 0)
    {
        iDigit = iValue % 10;
        printf("%d\n", iDigit);
        iValue = iValue / 10;
    }
}