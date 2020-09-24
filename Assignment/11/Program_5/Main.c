/*
Problem Statement :
Write a program which accept accept range from user and display all numbers in
between that range in reverse order.
Input : 23 35
Output : 35 34 33 32 31 30 29 28 27 26 25 24 23
Input : 10 18
Output : 18 17 16 15 14 13 12 11 10
Input : 10 10
Output : 10
Input : -10 2
Output : 2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10
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
    printf("Enter the Ending Point :\n");
    scanf("%d", &iEnd);

    RangeDisplayRev(iStart, iEnd);
    return 0;
}