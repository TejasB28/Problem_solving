////////////////////////////////////////////////////
//
//Function Name : CountWhite
//Input : Character
//Output : Integer
//Description : It is used to return white spaces in string.
//Author : Tejas A. Bora
//Date : 24 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

int CountWhite(char *str)
{
    int iCnt = 0, iSpaces = 0;

    while (str[iCnt] != '\0')
    {
        if (str[iCnt] == ' ')
        {
            iSpaces++;
        }
        iCnt++;
    }
    return iSpaces;
}