/*
Write a program which 2 strings from user and check whether
contents of two strings are equal or not. (Implement strcmp()
function).
Input : “Marvellous Infosystems”
“Marvellous Infosystems”
Output : TRUE
*/

#include "Header.h"

int main()
{
    char cStr1[50];
    char cStr2[50];
    BOOL bRet = FALSE;

    printf("Enter 1st String :\n");
    scanf("%[^'\n']s", cStr1);

    printf("Enter 2nd String :\n");
    scanf(" %[^'\n']s", cStr2);

    bRet = StrCmpX(cStr1, cStr2);

    if (bRet == TRUE)
    {
        printf("Strings are Equal\n");
    }
    else
    {
        printf("Strings are not Equal\n");
    }

    return 0;
}