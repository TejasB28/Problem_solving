////////////////////////////////////////////////////////////
//
//Function Name :   SumNonFact
//Parameters :      Interger
//Return value :    Integer
//Description :     It is used to print summation of non factors of input number.
//Author :          Tejas A. Bora
//Date :            2 Aug 2020
//
/////////////////////////////////////////////////////////////

#include "Header.h"

int SumNonFact(int iValue)
{
    int iCnt = 0;
    int iSum = 0;
    if (iValue < 0)
    {
        iValue = -iValue;
    }
    if (iValue == 0 || iValue == 1)
    {
        return -1;
    }
    for (iCnt = 2; iCnt < iValue; iCnt++)
    {
        if ((iValue % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

///////////////////////////////////////////////////////
//Time Complexity : O(N)
///////////////////////////////////////////////////////