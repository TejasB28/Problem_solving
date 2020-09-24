/*
Write a program which accept string from user and reverse each
word in place.
Input : “Marvellous Multi OS”
Output : “suollevraM itluM SO”
*/

#include "Header.h"

int main()
{
    char cStr[50];

    printf("Enter the String  :\n");
    scanf("%[^'\n']s", cStr);

    StrWrdRev(cStr);

    printf("reverse each word in place : %s", cStr);

    return 0;
}