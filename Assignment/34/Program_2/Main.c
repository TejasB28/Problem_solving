/*
Write a program which accept one number and position from user and off
that bit. Return modified number.
Input : 10 2
Output : 8
*/

#include "Header.h"

int main()
{
    UINT uValue = 0, uRet = 0;
    int iPos = 0;

    printf("Enter the Number :\n");
    scanf("%d", &uValue);

    printf("Enter the Position :\n");
    scanf("%d", &iPos);

    uRet = OffBit(uValue, iPos);

    if (uRet == -1)
    {
        printf("Invalid Position \n");
    }
    else if (uRet == -2)
    {
        printf("Bit is already OFF\n");
    }
    else
    {
        printf("Modified Number is : %d", uRet);
    }

    return 0;
}