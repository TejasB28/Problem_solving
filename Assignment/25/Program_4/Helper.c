/////////////////////////////////////////////////////
//
//Function Name : ChkDigit
//Input : Character
//Output : Boolean
//Description : It is used to check character is small or not.
//Author : Tejas A. Bora
//Date : 20 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkSmall(char Ch)
{
    if (Ch >= 97 && Ch <= 122)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}