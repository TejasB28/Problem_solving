/////////////////////////////////////////////////////
//
//Function Name : ChkAlpha
//Input : Character
//Output : Boolean
//Description : It is used to check character is alphabet or not.
//Author : Tejas A. Bora
//Date : 20 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkAlpha(char Ch)
{
    if ((Ch >= 65 && Ch <= 90) || (Ch >= 97 && Ch <= 122))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}