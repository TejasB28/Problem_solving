/*
Problem Statement :
Write a program which accept number from user and print its numbers line.
Input : 4
Output : -4 -3 -2 -1 0 1 2 3 4
*/

#include "Header.h"

int main()
{
    int iValue = 0;
    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}