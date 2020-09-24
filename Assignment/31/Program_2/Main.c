/*
Problem Statement :
Write a program which accept string from user and copy that
characters of that string into another string by removing all white
spaces.
Input : “Marvel lous Pyth on”
Output : “MarvellousPython”
*/

#include "Header.h"

int main()
{
    char cArr[50];
    char cBrr[50];

    printf("Enter the String :\n");
    scanf("%[^'\n']s", cArr);

    StrCpySpace(cArr, cBrr);

    printf("String After removing Spaces :%s", cBrr);

    return 0;
}