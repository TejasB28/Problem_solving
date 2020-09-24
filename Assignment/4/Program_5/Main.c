/*
Problem Statement :Write a program which accept number from user and return difference between
                   summation of all its factors and non factors.
    Input : 12
    Output :-34
    Input : 10
    Output :-29
*/
#include "Header.h"

int main()
{
    int iNo = 0;
    int iAns = 0;
    printf("Enter the Number :\n");
    scanf("%d", &iNo);

    iAns = FactDiff(iNo);
    printf("Difference between factors and non factors is  :%d", iAns);
    return 0;
}