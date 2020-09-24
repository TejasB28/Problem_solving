/*
Write a program which accept one number from user and toggle contents
of first and last nibble of the number. Return modified number. (Nibble is a
group of four bits)
*/

#include "Header.h"

int main()
{
    UINT uValue = 0, uRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &uValue);

    uRet = ToggleBit(uValue);

    printf("Modified Value is : %u", uRet);

    return 0;
}