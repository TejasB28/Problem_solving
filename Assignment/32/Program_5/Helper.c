/////////////////////////////////////////////////
//
//Function Name : ChkBit
//Input : unsigned int
//Output : Boolean
//Description : It is used to chk first and last bit is ON or OFF.
//Author : Tejas A. Bora
//Date : 4 Sep 2020
//
///////////////////////////////////////////////////

#include "Header.h"

BOOL ChkBit(UINT iNo)
{
    int iMask = 0X80000001;
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