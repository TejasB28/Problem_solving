//////////////////////////////////////////////////////////////
////
//Function Name : FactorialDiff
//Input : Integer
//Output : Integer
//Description : it is used to find difference between odd and even factorial.
//Author : Tejas A. Bora
//Date : 8 Aug 2020
////
//////////////////////////////////////////////////////////////

#include "Header.h"
// #include "C:\Users\dell\Desktop\marvellous\LB\Assignment\12\Program_3\Helper.c"
// #include "C:\Users\dell\Desktop\marvellous\LB\Assignment\12\Program_4\Helper.c"

int FactorialDiff(int iValue)
{
    int iCnt = 0;
    int iEven = 1;
    int iOdd = 1;
    if (iValue < 0)
    {
        iValue = -iValue;
    }
    if (iValue == 1)
    {
        return -1;
    }
    for (iCnt = iValue; iCnt >= 1; iCnt--)
    {
        if ((iCnt % 2) == 0)
        {
            iEven = iEven * iCnt;
        }
        else
        {
            iOdd = iOdd * iCnt;
        }
    }
    return (iEven - iOdd);
    //return ((EvenFactorial(iValue)) - (OddFactorial(iValue)));
}