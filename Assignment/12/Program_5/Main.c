/*
Problem Statement :
Write a program which returns difference between Even factorial and odd factorial
of given number.
Input : 5
Output : -7 (8 - 15)
Input : -5
Output : -7 (8 - 15)
Input : 10
Output : 2895 (3840 - 945)
*/

#include "Header.h"

int main()
{
    int iValue = 0;
    int iDiff = 0;
    printf("Enter Number :\n");
    scanf("%d", &iValue);

    iDiff = FactorialDiff(iValue);
    printf("Difference between Even and odd fatorial is :%d", iDiff);
    return 0;
}