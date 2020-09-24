/*
Write a program which accept one number from user and toggle 7th bit of
that number. Return modified number.

Input : 137
Output : 201
*/

#include "Header.h"

int main()
{
    UINT uValue = 0;
    UINT uRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &uValue);

    uRet = ToggleBit(uValue);

    printf("Modified Number is : %d", uRet);

    return 0;
}