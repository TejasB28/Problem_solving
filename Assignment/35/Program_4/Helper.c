////////////////////////////////////////////////////
//
//Function Name : ChkBit
//Input : unsigned int,int,int
//Output : boolean
//Description : It is used to chk given positions are ON or OFF of the number.
//Author : Tejas A. Bora
//Date : 5 Sep 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
    int iMask1 = 0X00000001, iMask2 = 0X00000001;
    int iResult1 = 0, iResult2 = 0;

    if ((iPos1 < 1 || iPos1 > 32) || (iPos2 < 1 || iPos2 > 32))
    {
        return ERRPOS;
    }

    iMask1 = iMask1 << iPos1 - 1;
    iMask2 = iMask2 << iPos2 - 1;

    iResult1 = iMask1 & iNo;
    iResult2 = iMask2 & iNo;

    if ((iResult1 == iMask1) || (iResult2 == iMask2))
    {
        return TRUE;
    }
    else if ((iResult1 != iMask1) || (iResult2 != iMask2))
    {
        return FALSE;
    }
}