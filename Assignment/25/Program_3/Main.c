/*
Accept Character from user and check whether it is digit or not
(0-9).
Input : 7
Output : TRUE
Input : d
Output : FALSE
*/

#include "Header.h"

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Character\n");
    scanf("%c", &cValue);

    bRet = ChkDigit(cValue);

    if (bRet == TRUE)
    {
        printf("It is Digit\n");
    }
    else
    {
        printf("It is not Digit\n");
    }
    return 0;
}