/////////////////////////////////////////////////////
//
//Function Name : FirstChar
//Input : Character *,Character
//Output : Integer
//Description : It is used to return the first occurance of character in string.
//Author : Tejas A. Bora
//Date : 26 Aug 2020
//
//////////////////////////////////////////////////////

#include "Header.h"

int FirstChar(char *cStr, char ch)
{
    int iCnt = 0;

    if ((str == NULL) || (ch == '\0'))
    {
        return -1;
    }
    while (cStr[iCnt] != '\0')
    {
        if (cStr[iCnt] == ch)
        {
            break;
        }
        iCnt++;
    }
    if (cStr[iCnt] == ch)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
}