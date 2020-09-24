////////////////////////////////////////////////////
//
//Function Name : ChkBit
//Input : unsigned int
//Output : boolean
//Description : It is used to chk 9th nd 12th bit is ON or OFF.
//Author : Tejas A. Bora
//Date : 5 Sep 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkBit(UINT iNo)
{
    int iMask1 = 0X00000100, iMask2 = 0X00000800;

    int iResult1 = 0, iResult2 = 0;

    iResult1 = iMask1 & iNo;
    iResult2 = iMask2 & iNo;

    if ((iResult1 == iMask1) || (iResult2 == iMask2))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}