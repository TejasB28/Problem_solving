/*
Write a program which accept one number , two positions from user and
check whether bit at first or bit at second position is ON or OFF.
Input : 10 3 7
Output : TRUE
*/

#include "Header.h"

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;
    int iPos1 = 0, iPos2 = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    printf("Enter 1st position :\n");
    scanf("%d", &iPos1);

    printf("Enter 2nd Position :\n");
    scanf("%d", &iPos2);

    bRet = ChkBit(iValue, iPos1, iPos2);

    if (bRet == TRUE)
    {
        printf("%d or %d Bit is ON\n", iPos1, iPos2);
    }
    if (bRet == FALSE)
    {
        printf("%d or %d Bit is OFF\n", iPos1, iPos2);
    }
    if (bRet == ERRPOS)
    {
        printf("Invalid Position \n");
    }

    return 0;
}