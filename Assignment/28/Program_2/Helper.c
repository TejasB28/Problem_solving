/////////////////////////////////////////////////////
//
//Function Name : struprx
//Input : Character
//Output : none
//Description : It is used to convert the string into upper case.
//Author : Tejas A. Bora
//Date : 24 Aug 2020
//
/////////////////////////////////////////////////////
#include "Header.h"

void struprx(char *str)
{
    int iCnt = 0;
    char ch = '\0';

    while (str[iCnt] != '\0')
    {
        ch = str[iCnt];
        if (ch >= 97 && ch <= 122)
        {
            printf("%c", str[iCnt] - 32);
        }
        else
        {
            printf("%c", ch);
        }
        iCnt++;
    }
}