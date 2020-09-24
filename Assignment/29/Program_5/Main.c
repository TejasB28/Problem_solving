/*
Write a program which accept string from user reverse that string
in place.
Input : “abcd”
Output : “dcba”
Input : “abba”
Output : “abba”
*/

#include "Header.h"

int main()
{
    char cArr[50];

    printf("Enter String :\n");
    scanf("%[^\n]s", cArr);

    StrrevXX(cArr);

    printf("Reversed String is :%s", cArr);

    return 0;
}