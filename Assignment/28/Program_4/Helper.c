////////////////////////////////////////////////////
//
//Function Name : Display
//Input : Character
//Output : none
//Description : It is used to print numbers from string.
//Author : Tejas A. Bora
//Date : 24 Aug 2020
//
/////////////////////////////////////////////////////
#include "Header.h"

void Display(char *str)
{
    int iCnt = 0, iNo = 0;

    while (str[iCnt] != '\0')
    {
        if (str[iCnt] >= 48 && str[iCnt] <= 57)
        {
            iNo++;
            printf("%c ", str[iCnt]);
        }

        iCnt++;
    }
    if (iNo == 0)
    {
        printf("NO NUMBERS FOUND");
    }
}