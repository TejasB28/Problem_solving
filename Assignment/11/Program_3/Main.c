/*
Problem Statement :
Write a program which accept range from user and return addition of all numbers
in between that range. (Range should contains positive numbers only)
Input : 23 30
Output : 212
Input : 10 18
Output : 126
Input : -10 2
Output : Invalid range
Input : 90 18
Output : Invalid range
*/

#include "Header.h"

int main()
{
    int iStart = 0;
    int iEnd = 0;
    int iSum = 0;
    printf("Enter the Starting point :\n");
    scanf("%d", &iStart);
    printf("Enter the Ending point :\n");
    scanf("%d", &iEnd);

    iSum = RangeSum(iStart, iEnd);
    if (iSum == -1)
    {
        printf("Invalid Range..!");
    }
    else
    {
        printf("Addition of the Numbers in Range is :%d", iSum);
    }

    return 0;
}