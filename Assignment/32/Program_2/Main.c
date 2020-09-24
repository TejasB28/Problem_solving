/*
Write a program which checks whether 5th & 18th bit is On or OFF.
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
        printf("5th and 18th Bit is ON\n");
    }
    else
    {
        printf("5th and 18th Bit is OFF\n");
    }

    return 0;
}