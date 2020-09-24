/////////////////////////////////////////////////////
//
//Function Name : strtogglex
//Input : Character
//Output : none
//Description : It is used to convert the string and toggole cases.
//Author : Tejas A. Bora
//Date : 24 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

void strtogglex(char *str)
{
    int iCnt = 0;
    char ch = '\0';

    while (str[iCnt] != '\0')
    {
        ch = str[iCnt];
        if (ch >= 65 && ch <= 90)
        {
            printf("%c", str[iCnt] + 32);
        }
        else if (ch >= 97 && ch <= 122)
        {
            printf("%c", str[iCnt] - 32);
        }
        iCnt++;
    }
}