/*
Problem Statement :
Write a program which accept string from user and copy small
characters of that string into another string.
Input : “Marvellous multi OS”
Output : “arvellous multi”
*/

#include "Header.h"

int main()
{
    char cArr[50];
    char cArrC[50];

    printf("Enter the String :\n");
    scanf("%[^\n]s", cArr);

    StrCpySmall(cArr, cArrC);

    if (*cArrC == '\0')
    {
        printf("NO SMALL CASE CHARACTER IN STRING \n");
    }
    else
    {
        printf("Small case characters in string : %s", cArrC);
    }

    return 0;
}