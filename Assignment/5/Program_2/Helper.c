//////////////////////////////////////////////////////////////////////
//
// Function Name :   ChkGreater
// Input :           Integer
// Output :          Boolean
// Description :     It is used to check the number is greater or smaller than 100.
// Author :          Tejas A. Bora.
// Date :            4 Aug 2020
//
//////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkGreater(int iValue)
{
    if (iValue >= 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}