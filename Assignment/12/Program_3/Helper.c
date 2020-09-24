////////////////////////////////////////////////////
////
//Function Name : EvenFactorial
//Input : Integer
//Output : Integer
//Description : It is used to return even factorial of number
//Author : Tejas A. Bora
//Date : 8 Aug 2020
////
/////////////////////////////////////////////////////

#include "Header.h"

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    if (iNo == 0 || iNo == 1)
    {
        return 0;
    }
    for (iCnt = iNo; iCnt >= 2; iCnt--)
    {
        if ((iCnt % 2) == 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}