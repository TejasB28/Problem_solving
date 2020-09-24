/*
Problem Statement : 
Write a program to find even factorial of given number.
Input : 5
Output : 8 (4 * 2)
Input : -5
Output : 8 (4 * 2)
Input : 10
Output : 3840 (10 * 8 * 6 * 4 * 2)
*/

#include "Header.h"

int main()
{
    int iValue = 0;
    int iFact = 0;
    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iFact = EvenFactorial(iValue);
    printf("Even factorial of number is :%d", iFact);
    return 0;
}