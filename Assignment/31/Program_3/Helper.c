////////////////////////////////////////////////////////
//
//Function Name : StrCpyCap
//Input : Character *,Character *
//Output : None
//Description : It is used to copy the string into another string and convert all characters into capital case.
//Author : Tejas A. Bora
//Date : 31 Aug 2020
//
/////////////////////////////////////////////////////////

#include "Header.h"

void StrCpyCap(char *cStr, char *cStrC)
{
    while (*cStr != '\0')
    {
        if (*cStr >= 'a' && *cStr <= 'z')
        {
            *cStrC = *cStr - 32;
            cStrC++;
        }
        else
        {
            *cStrC = *cStr;
            cStrC++;
        }
        cStr++;
    }
    *cStrC = '\0';
}