/*
Write a program which accept string from user and return length of
largest word.
Input : “Marvellous Multi OS Infosystems”
Output : 11
*/

#include "Header.h"

int main()
{
    char cStr[50];
    int iRet = 0;

    printf("Enter the String :\n");
    scanf("%[^'\n']s", cStr);

    iRet = WordMaxLength(cStr);

    printf("Length of largest word : %d", iRet);

    return 0;
}