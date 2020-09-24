/*
Write a program which accept one number from user and on its first 4
bits. Return modified number.
Input : 73
Output : 79
*/

#include "Header.h"

int main()
{
    UINT uValue = 0;
    UINT uRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &uValue);

    uRet = OnBit(uValue);

    printf("Modified Value is : %d", uRet);

    return 0;
}