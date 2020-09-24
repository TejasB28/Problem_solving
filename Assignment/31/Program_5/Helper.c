////////////////////////////////////////////////////////
//
//Function Name : StrCpyToggle
//Input : Character *,Character *
//Output : None
//Description : It is used to copy the string into another string and toggele the cases of string.
//Author : Tejas A. Bora
//Date : 31 Aug 2020
//
/////////////////////////////////////////////////////////

#include "Header.h"

void StrCpyToggle(char *cStr, char *cStrC)
{
    while (*cStr != '\0')
    {
        if ((*cStr >= 'A') && (*cStr <= 'Z'))
        {
            *cStrC = *cStr + 32;
            cStrC++;
        }
        else if ((*cStr >= 'a') && (*cStr <= 'z'))
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