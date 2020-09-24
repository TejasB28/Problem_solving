/*
Accept string from user and check whether the string is palindrome
or not without considering its case.
Input : “1abccBA1”
Output : TRUE
*/

#include "Header.h"

int main()
{
    char cStr[50];
    BOOL bRet = FALSE;

    printf("Enter the String :\n");
    scanf("%[^'\n']s", cStr);

    bRet = StrPallindrome(cStr);

    if (bRet == TRUE)
    {
        printf("String is Palindrome \n");
    }
    else
    {
        printf("String is Not Palindrome \n");
    }

    return 0;
}