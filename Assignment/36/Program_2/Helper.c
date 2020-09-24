////////////////////////////////////////////////////
//
//Function Name : StrCmpX
//Input : char *,char *
//Output : boolean
//Description : It is used compare two strings.
//Author : Tejas A. Bora
//Date : 5 Sep 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

BOOL StrCmpX(char *cStr1, char *cStr2)
{
    if ((cStr1 == NULL) || (cStr2 == NULL))
    {
        return FALSE;
    }
    while ((*cStr1 != '\0') && (*cStr2 != '\0'))
    {
        if (*cStr1 != *cStr2)
        {
            break;
        }
        cStr1++;
        cStr2++;
    }
    if ((*cStr1 == *cStr2) && (*cStr1 == '\0'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}