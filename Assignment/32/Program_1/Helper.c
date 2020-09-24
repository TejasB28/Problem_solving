/////////////////////////////////////////////////
//
//Function Name : ChkBit
//Input : unsigned int
//Output : Boolean
//Description : It is used to chk 15th bit is ON or OFF.
//Author : Tejas A. Bora
//Date : 4 Sep 2020
//
//////////////////////////////////////////////////

#include "Header.h"

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0X00004000;
    UINT iResult = 0;

    iResult = iNo & iMask;

    if (iMask == iResult)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}