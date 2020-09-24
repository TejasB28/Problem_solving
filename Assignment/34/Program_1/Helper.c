////////////////////////////////////////////////////
//
//Function Name : ChkBit
//Input : unsigned int,int
//Output : boolean
//Description : It is used to chk bit is on or off as per given position.
//Author : Tejas A. Bora
//Date : 4 Sep 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkBit(UINT uNo, int iPos)
{
    int iMask = 0X00000001;
    int iResult = 0;

    if (iPos < 1 || iPos > 32)
    {
        return ERRPOS;
    }

    iMask = iMask << iPos - 1;

    iResult = uNo & iMask;
    if (iMask == iResult)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}