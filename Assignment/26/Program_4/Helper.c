/////////////////////////////////////////////////////
//
//Function Name : ChkSpecial
//Input : Character
//Output : boolean
//Description : It is used to check whether it is special symbol or not.
//Author : Tejas A. Bora
//Date : 22 Aug 2020
//
/////////////////////////////////////////////////////
#include "Header.h"

BOOL ChkSpecial(char ch)
{
    if (ch >= 65 && ch <= 90 || ch >= 48 && ch <= 57 || ch >= 97 && ch <= 122)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}