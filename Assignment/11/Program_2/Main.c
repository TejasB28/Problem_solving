/*
Problem Statement :
Write a program which accept range from user and display all even numbers in
between that range.
Input : 23 35
Output : 24 26 28 30 32 34
Input : 10 18
Output : 10 12 14 16 18
Input : 10 10
Output : 10
Input : -10 2
Output : -10 -8 -6 -4 -2 0 2
Input : 90 18
Output : Invalid range
*/

#include "Header.h"

int main()
{
    int iStart = 0;
    int iEnd = 0;
    printf("Enter the Starting point :\n");
    scanf("%d", &iStart);
    printf("Enter the Ending point :\n");
    scanf("%d", &iEnd);

    RangeDisplayEven(iStart, iEnd);
    return 0;
}