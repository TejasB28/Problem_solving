/////////////////////////////////////////////////////
//
//Function Name : CountChar
//Input : Character *,Character
//Output : Integer
//Description : It is used to count the frequency of character in string.
//Author : Tejas A. Bora
//Date : 26 Aug 2020
//
//////////////////////////////////////////////////////

#include "Header.h"

int CountChar(char *cStr, char ch)
{
    int iCnt = 0;

    if (cStr == NULL)
    {
        return -1;
    }

    while (*cStr != '\0')
    {
        if (*cStr == ch)
        {
            iCnt++;
        }
        cStr++;
    }
    return iCnt;
}