/*
Write a program which accept one number and position from user and
check whether bit at that position is on or off. If bit is on return TURE
otherwise return FALSE.

Input : 10 2
Output : TRUE
*/

#include "Header.h"

int main()
{
    UINT uValue = 0;
    int iPos = 0;
    BOOL bRet = FALSE;

    printf("Enter the Number :\n");
    scanf("%d", &uValue);

    printf("Enter the Position :\n");
    scanf("%d", &iPos);

    bRet = ChkBit(uValue, iPos);

    if (bRet == ERRPOS)
    {
        printf("Invalid Bit\n");
    }
    else if (bRet == TRUE)
    {
        printf("Bit is ON\n");
    }
    else
    {
        printf("Bit is OFF\n");
    }

    return 0;
}
