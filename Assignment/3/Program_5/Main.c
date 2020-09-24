/*
Problem Statement :Accept one variable from user and check whether character is vowel or not.
*/

#include "Header.h"

int main()
{
    char cValue = "\0";
    BOOL bRet = FALSE;

    printf("Enter the character :\n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not vowel");
    }

    return 0;
}