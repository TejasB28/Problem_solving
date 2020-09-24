/*
Write a program which checks whether first and last bit is On or
OFF. First bit means bit number 1 and last bit means bit number 32.
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
        printf("First and Last bit is ON\n");
    }
    else
    {
        printf("First and Last bit is OFF\n");
    }

    return 0;
}