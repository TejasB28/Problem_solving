/*
Write a program which accept string from user and copy that
characters of that string into another string by converting all capital
characters into small case.

Input : “Marvellous Python 2”
Output : “marvellous python 2”
*/

#include "Header.h"

int main()
{
    char cArr[50];
    char cArrC[50];

    printf("Enter the String :\n");
    scanf("%[^'\n']s", cArr);

    StrCpySmall(cArr, cArrC);

    printf("After converting into small case : %s", cArrC);

    return 0;
}