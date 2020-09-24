/*
Problem Statement :
Write a program which accept string from user and copy capital
characters of that string into another string.
Input : “Marvellous Multi OS”
Output : “MMOS”
*/

#include "Header.h"

int main()
{
    char cArr[50];
    char cArrC[50];

    printf("Enter the string :\n");
    scanf("%[^\n]s", cArr);

    StrCpyCap(cArr, cArrC);

    if (*cArrC == '\0')
    {
        printf("NO UPPER CASE CHARACTER IN STRING \n");
    }
    else
    {
        printf("UPPER letters in strings are : %s", cArrC);
    }
    return 0;
}