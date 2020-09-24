/*
Write a program which accept one number from user and off 7th and 10th
bit of that number. Return modified number.

Input : 577
Output : 1
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
        printf("7th and 10th Bit is OFF\n");
    }
    else
    {
        printf("Modified Number is : %d", uRet);
    }

    return 0;
}