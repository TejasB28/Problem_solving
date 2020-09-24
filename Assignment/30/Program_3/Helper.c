/////////////////////////////////////////////////////
//
//Function Name : StrCpyCap
//Input : Character *,character *
//Output : None
//Description : It is used to copy UPPER letters of string into the another string.
//Author : Tejas A. Bora
//Date : 26 Aug 2020
//
//////////////////////////////////////////////////////

#include "Header.h"

void StrCpyCap(char *cStr, char *cStrC)
{
    while (*cStr != '\0')
    {
        if ((*cStr >= 'A') && (*cStr <= 'Z'))
        {
            *cStrC = *cStr;
            cStrC++;
        }
        cStr++;
    }
    *cStrC = '\0';
}