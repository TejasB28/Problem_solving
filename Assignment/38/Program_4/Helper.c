///////////////////////////////////////////////
//
//Function Name : Pattern
//Input : char *
//Output : none
//Description : It is used to print pattern
//Author : Tejas Bora
//Date : 7 sep 2020
//
////////////////////////////////////////////////

#include "Header.h"

void Pattern(char *cStr)
{
    int i = 0, j = 0;
    while (cStr[i] != '\0')
    {
        j = 0;
        while (cStr[j] != '\0')
        {
            if ((cStr[j] >= 'a') && (cStr[j] <= 'z'))
            {
                cStr[j] -= 32;
            }
            printf("%c\t", cStr[j]);
            j++;
        }
        printf("\n");
        i++;
    }
}