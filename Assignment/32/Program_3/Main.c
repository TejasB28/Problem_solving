/*
Write a program which checks whether 7th & 15th & 21st , 28th bit
is On or OFF.
*/

#include "Header.h"

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    bRet = ChkBit(iValue);

    if (bRet == TRUE)
    {
        printf("7th,15th,21st & 28th bit is ON\n");
    }
    else
    {
        printf("7th,15th,21st & 28th bit is OFF\n");
    }

    return 0;
}