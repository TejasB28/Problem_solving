/*
Write a program which accept string from user and copy that
characters of that string into another string by converting all small
characters into capital case.
Input : “Marvellous Python 2”
Output : “MARVELLOUS PYTHON 2”
*/

#include "Header.h"

int main()
{
    char cArr[50];
    char cArrC[50];

    printf("Enter the String :\n");
    scanf("%[^'\n]s", cArr);

    StrCpyCap(cArr, cArrC);

    printf("After Converting into capital case : %s", cArrC);

    return 0;
}