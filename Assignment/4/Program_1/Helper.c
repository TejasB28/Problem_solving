//////////////////////////////////////////////////
//
//Function Name :   MultFact
//Parameters :      Interger
//Return value :    Integer
//Description :     It is used to print multiplication of factors.
//Author :          Tejas A. Bora
//Date :            2 Aug 2020
//
//////////////////////////////////////////////////

#include "Header.h"

int MultFact(int iValue)
{
    int iCnt = 0;
    int iRet = 1;

    if (iValue < 0)
    {
        iValue = -iValue;
    }
    if (iValue == 0)
    {
        return 0;
    }

    for (iCnt = 1; iCnt <= iValue / 2; iCnt++)
    {
        if ((iValue % iCnt) == 0)
        {
            iRet = iRet * iCnt;
        }
    }
    return iRet;
}
//////////////////////////////////////////////////
//Time Complexity : O(N/2)
/////////////////////////////////////////////////