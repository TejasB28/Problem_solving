/////////////////////////////////////////////////////
//
//Function Name : ChkCapital
//Input : Character
//Output : Boolean
//Description : It is used to check character is capital or not.
//Author : Tejas A. Bora
//Date : 20 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkCapital(char Ch)
{
    if (Ch >= 65 && Ch <= 90)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}