/////////////////////////////////////////////////////
//
//Function Name : StrCpySmall
//Input : Character *,character *
//Output : None
//Description : It is used to copy SMALL letters of string into the another string.
//Author : Tejas A. Bora
//Date : 26 Aug 2020
//
//////////////////////////////////////////////////////

#include "Header.h"

void StrCpySmall(char *cStr, char *cStrC)
{
    if (cStr == NULL)
    {
        printf("ERROR : INVALID ADDRESS\n");
        return;
    }
    while (*cStr != '\0')
    {
        if ((*cStr >= 'a') && (*cStr <= 'z'))
        {
            *cStrC = *cStr;
            cStrC++;
        }
        cStr++;
    }
    *cStrC = '\0';
}