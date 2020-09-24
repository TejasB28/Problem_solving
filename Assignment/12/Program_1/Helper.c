///////////////////////////////////////////////////////////////
////
//Function Name : Display
//Input : Integer
//Output : none
//Description : It is used to print pattern * # .
//Author : Tejas A. Bora
//Date : 8 Aug 2020
////
////////////////////////////////////////////////////////////////

#include "Header.h"

void Display(int iNo)
{
    int iCnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= iNo * 2; iCnt++)
    {
        if (iCnt <= iNo)
        {
            printf("*\t");
        }
        else
        {
            printf("#\t");
        }
    }
}