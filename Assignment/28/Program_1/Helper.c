/////////////////////////////////////////////////////
//
//Function Name : strlwrx
//Input : Character
//Output : none
//Description : It is used to convert the string into lower case.
//Author : Tejas A. Bora
//Date : 24 Aug 2020
//
/////////////////////////////////////////////////////
#include "Header.h"

void strlwrx(char *str)
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
        else
        {
            printf("%c", ch);
        }
        iCnt++;
    }
}