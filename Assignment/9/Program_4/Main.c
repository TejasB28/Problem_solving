/*
Problem Statement :
Write a program which accepts N from user and print all odd numbers up to N.
Input : 18
Output : 1 3 5 7 9 11 13
*/
#include "Header.h"

int main()
{
    int iValue = 0;
    printf("Enter Number :\n");
    scanf("%d", &iValue);

    OddDisplay(iValue);
    return 0;
}