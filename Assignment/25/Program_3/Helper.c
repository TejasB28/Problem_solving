/////////////////////////////////////////////////////
//
//Function Name : ChkDigit
//Input : Character
//Output : Boolean
//Description : It is used to check character is digit or not.
//Author : Tejas A. Bora
//Date : 20 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkDigit(char Ch)
{
    if (Ch >= 48 && Ch <= 57)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}