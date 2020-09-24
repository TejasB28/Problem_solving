////////////////////////////////////////////////////////
//
//Function Name : StrCpySmall
//Input : Character *,Character *
//Output : None
//Description : It is used to copy the string into another string and convert all characters into small case.
//Author : Tejas A. Bora
//Date : 31 Aug 2020
//
/////////////////////////////////////////////////////////

#include "Header.h"

void StrCpySmall(char *cStr, char *cStrC)
{
    while (*cStr != '\0')
    {
        if ((*cStr >= 'A') && (*cStr <= 'Z'))
        {
            *cStrC = *cStr + 32;
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