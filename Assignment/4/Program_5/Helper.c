////////////////////////////////////////////////////////////
//
//Function Name :   FactDiff
//Parameters :      Interger
//Return value :    Integer
//Description :     It is used to print difference between summation of factors and non factors of input number.
//Author :          Tejas A. Bora
//Date :            2 Aug 2020
//
/////////////////////////////////////////////////////////////

#include "Header.h"

int FactDiff(int iValue)
{
    int iCnt = 0;
    int iNonF = 0;
    int iFac = 1;
    int iDiff = 0;
    if (iValue < 0)
    {
        iValue = -iValue;
    }
    if (iValue == 0)
    {
        return 0;
    }
    if (iValue == 1)
    {
        return 1;
    }
    for (iCnt = 2; iCnt < iValue; iCnt++)
    {
        if ((iValue % iCnt) == 0)
        {
            iFac = iFac + iCnt;
        }
        else if ((iValue % iCnt) != 0)
        {
            iNonF = iNonF + iCnt;
        }
    }
    iDiff = iFac - iNonF;
    return iDiff;
}
/////////////////////////////////////////////////////////////
//Time Complexity= O(N)
///////////////////////////////////////////////////////////