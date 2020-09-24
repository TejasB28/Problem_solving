/*
Write a program which accept one number from user and off 7th bit of that
number if it is on. Return modified number.

Input : 79
Output : 15
*/

#include "Header.h"

int main()
{
    UINT iValue = 0;
    UINT uRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    uRet = OffBit(iValue);

    if (uRet == -1)
    {
        printf("7th Bit is OFF\n");
    }
    else
    {
        printf("Modified Number is : %d", uRet);
    }

    return 0;
}