/*
Problem Statement :
Write a program which accept number from user and print numbers till that
number.
Input : 8
Output : 1 2 3 4 5 6 7 8
*/

#include "Header.h"

int main()
{
    int iValue = 0;
    printf("Enter Number :\n");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}