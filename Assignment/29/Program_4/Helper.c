/////////////////////////////////////////////////////
//
//Function Name : LastChar
//Input : Character *,Character
//Output : Integer
//Description : It is used to return the last occurance of character in string.
//Author : Tejas A. Bora
//Date : 26 Aug 2020
//
//////////////////////////////////////////////////////

#include "Header.h"

int LastChar(char *cStr, char ch)
{
    int iCnt = 0, i = -1;

    while (cStr[iCnt] != '\0')
    {
        if (cStr[iCnt] == ch)
        {
            i = iCnt;
        }
        iCnt++;
    }
    return i;
}
