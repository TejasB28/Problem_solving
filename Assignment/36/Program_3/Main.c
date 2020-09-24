/*
Write a program which 2 strings from user and check whether first
N contents of two strings are equal or not. (Implement strcmp()
function).
Note : If third parameter is greater than the size of second string then
concat whole string after first string.
Input : “Marvellous Infosystems”
“Marvellous Logic Building”
10
Output : TRUE
*/

#include "Header.h"

int main()
{
    char cStr1[50];
    char cStr2[50];
    int iNo = 0;
    BOOL bRet = FALSE;

    printf("Enter 1st String :\n");
    scanf("%[^'\n']s", cStr1);

    printf("Enter 2nd String :\n");
    scanf(" %[^'\n']s", cStr2);

    printf("How Many characters you want to compare :\n");
    scanf(" %d", &iNo);

    bRet = StrNCmpX(cStr1, cStr2, iNo);

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