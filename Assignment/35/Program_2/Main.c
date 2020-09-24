/*
Write a program which accept two numbers from user and display position
of common ON bits from that two numbers.
Input : 10 15 (1010 1111)
Output : 2 4
*/

#include "Header.h"

int main()
{
    UINT iValue1 = 0, iValue2 = 0;

    printf("Enter 1st Number :\n");
    scanf("%d", &iValue1);

    printf("Enter 2nd Number :\n");
    scanf("%d", &iValue2);

    CommonBits(iValue1, iValue2);

    return 0;
}