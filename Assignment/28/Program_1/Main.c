/*
Write a program which accept string from user and convert it into
lower case.
Input : “Marvellous Multi OS”
Output : marvellous multi os
*/

#include "Header.h"

int main()
{
    char cArr[50];

    printf("Enter String :\n");
    scanf("%[^'\n']s", cArr);

    strlwrx(cArr);

    return 0;
}