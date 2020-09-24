/////////////////////////////////////////////////////////
////
//Function Name : OddFactorial
//Input : Integer
//Output : Integer
//Description : It is used to find odd factorial of number.
//Author : Tejas A. Bora
//Date : 8 Aug 2020
////
//////////////////////////////////////////////////////////

#include "Header.h"

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    if (iNo == 0)
    {
        return 0;
    }
    for (iCnt = iNo; iCnt >= 2; iCnt--)
    {
        if ((iCnt % 2) != 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}