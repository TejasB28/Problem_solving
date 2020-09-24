/*
Problem Statement :
Write a program which accept string from user and accept one
character. Return frequency of that character.
Input : “Marvellous Multi OS”
M
Output : 2
Input : “Marvellous Multi OS”
W
Output : 0
*/

#include "Header.h"

int main()
{
    char cArr[50];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^\n]s", cArr);

    printf("Enter character to find frequency :\n");
    scanf(" %c", &cValue);

    iRet = CountChar(cArr, cValue);

    printf("Frequency of %c is : %d", cValue, iRet);

    return 0;
}