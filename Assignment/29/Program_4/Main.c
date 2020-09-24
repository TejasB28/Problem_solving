/*
Problem Statement :
Write a program which accept string from user and accept one
character. Return index of last occurrence of that character.
Input : “Marvellous Multi OS”
M
Output : 11
Input : “Marvellous Multi OS”
W
Output : -1
Input : “Marvellous Multi OS”
e
Output : 4
*/

#include "Header.h"

int main()
{
    char cArr[50];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^\n]s", cArr);

    printf("Enter the character you want to search :\n");
    scanf(" %c", &cValue);

    iRet = LastChar(cArr, cValue);

    if (iRet == -1)
    {
        printf("%c is not present in string \n", cValue);
    }
    else
    {
        printf("Last Occurance of %c is :%d", cValue, iRet);
    }

    return 0;
}