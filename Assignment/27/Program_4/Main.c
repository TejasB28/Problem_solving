/*
Write a program which accept string from user and check whether
it contains vowels in it or not.
Input : “marvellous”
Output : TRUE
Input : “Demo”
Output : TRUE
Input : “xyz”
Output : FALSE
*/

#include "Header.h"

int main()
{
    char cARR[50];
    BOOL bRet = FALSE;

    printf("Enter String :\n");
    scanf("%[^\n]s", cARR);

    bRet = ChkVowel(cARR);

    if (bRet == TRUE)
    {
        printf("It contains vowel \n");
    }
    else
    {
        printf("It not contains vowel\n");
    }
    return 0;
}
