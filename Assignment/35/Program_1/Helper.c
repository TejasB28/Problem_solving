////////////////////////////////////////////////////
//
//Function Name : CountOne
//Input : unsigned int
//Output : int
//Description : It is used to count one in number.
//Author : Tejas A. Bora
//Date : 5 Sep 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

int CountOne(UINT iValue)
{
    int iMask = 0X00000001;
    int iCnt = 0;
    int iResult = 0;

    while (iMask != 0X80000000)
    {
        iResult = iMask & iValue;

        if (iResult == iMask)
        {
            iCnt++;
        }
        iMask = iMask << 1;
    }
    return iCnt;
}