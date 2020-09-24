/*
Write a program which accept one number from user and check whether
9th or 12th bit is on or off.
Input : 257
Output : TRUE
*/

#include "Header.h"

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    bRet = ChkBit(iValue);

    if (bRet == TRUE)
    {
        printf("9th or 12th bit is ON\n");
    }
    else
    {
        printf("9th or 12th bit is OFF\n");
    }

    return 0;
}