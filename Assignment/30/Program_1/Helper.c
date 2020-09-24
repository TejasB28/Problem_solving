/////////////////////////////////////////////////////
//
//Function Name : StrCpyX
//Input : Character *,character *
//Output : None
//Description : It is used to copy string into the another string.
//Author : Tejas A. Bora
//Date : 26 Aug 2020
//
//////////////////////////////////////////////////////

#include "Header.h"

void StrCpyX(char *cStr, char *cNew)
{
    while (*cStr != '\0')
    {
        *cNew = *cStr;
        cStr++;
        cNew++;
    }
    *cNew = '\0';
}