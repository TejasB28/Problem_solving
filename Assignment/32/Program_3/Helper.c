/////////////////////////////////////////////////
//
//Function Name : ChkBit
//Input : unsigned int
//Output : Boolean
//Description : It is used to chk 7th,15th,21st & 28th bit is ON or OFF.
//Author : Tejas A. Bora
//Date : 4 Sep 2020
//
//////////////////////////////////////////////////

#include "Header.h"

BOOL ChkBit(UINT iNo)
{
    int iMask = 0X08104040;
    int iResult = 0;

    iResult = iNo & iMask;

    if (iResult == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}