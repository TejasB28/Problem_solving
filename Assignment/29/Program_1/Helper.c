/////////////////////////////////////////////////////
//
//Function Name : ChkChar
//Input : Character *,Character
//Output : Boolean
//Description : It is used to check the character is present is present in string or not.
//Author : Tejas A. Bora
//Date : 26 Aug 2020
//
//////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkChar(char *cStr, char ch)
{
    int iCnt = 0;

    if (cStr == NULL)
    {
        return ERRMEMORY;
    }
    if (ch == '\0')
    {
        return ERRCHAR;
    }

    while (*cStr != '\0')
    {
        if (*cStr == ch)
        {
            iCnt = 1;
            break;
        }
        cStr++;
    }
    if (iCnt == 1)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}