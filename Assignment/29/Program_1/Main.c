/*
Problem Statement :
Write a program which accept string from user and accept one
character. Check whether that character is present in string or not.
Input : “Marvellous Multi OS”
e
Output : TRUE
Input : “Marvellous Multi OS”
W
Output : FALSE
*/

#include "Header.h"

int main()
{
    char cArr[50];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter String :\n");
    scanf("%[^\n]s", cArr);

    printf("Enter Character that u want to search :\n");
    scanf(" %c", &cValue);

    bRet = ChkChar(cArr, cValue);

    if (bRet == ERRMEMORY)
    {
        printf("ERROR : INVALID MEMOERY ADDRESS\n");
    }
    else if (bRet == ERRCHAR)
    {
        printf("ERROR : No CHARACTER FOUND\n");
    }
    else if (bRet == TRUE)
    {
        printf("%c is present in String", cValue);
    }
    else
    {
        printf("%c is not present in String", cValue);
    }

    return 0;
}