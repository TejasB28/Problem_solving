/////////////////////////////////////////////////////
//
//Function Name : StrCatX
//Input : Character *,character *
//Output : None
//Description : It is used to concatenate two strings.
//Author : Tejas A. Bora
//Date : 26 Aug 2020
//
//////////////////////////////////////////////////////

#include "Header.h"

void StrCatX(char *str1, char *str2)
{
    if (str1 == NULL)
    {
        printf("ERROR : INVALID ADDRESS\n");
        return;
    }
    if (str2 == NULL)
    {
        printf("ERROR : INVALID ADDRESS\n");
        return;
    }

    while (*str1 != '\0')
    {
        str1++;
    }

    *str1 = ' ';
    str1++;

    while (*str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}