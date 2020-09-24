//////////////////////////////////////////////////
//
//Function Name :   ChkEven
//Parameters :      Interger
//Return value :    Boolean
//Description :     It checks whether number is even or odd.
//Author :          Tejas A. Bora
//Date :            27 july 2020
//
//////////////////////////////////////////////////
#include "Header.h"

BOOL ChkEven(int iValue)
{
    if ((iValue % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}