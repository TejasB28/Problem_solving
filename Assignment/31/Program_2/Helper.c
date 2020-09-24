////////////////////////////////////////////////////////
//
//Function Name : StrCpySpace
//Input : Character *,Character *
//Output : None
//Description : It is used to copy the string into another string expect spaces.
//Author : Tejas A. Bora
//Date : 31 Aug 2020
//
/////////////////////////////////////////////////////////

#include "Header.h"

void StrCpySpace(char *cStr, char *cStrC)
{
    while (*cStr != '\0')
    {
        if (*cStr != ' ')
        {
            *cStrC = *cStr;
            cStrC++;
        }
        cStr++;
    }
    *cStrC = '\0';
}