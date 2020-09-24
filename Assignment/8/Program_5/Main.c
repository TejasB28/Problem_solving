/*
Problem Statement :
Write a program which accept number from user and display its table in reverse
order.
Input : 2
Output : 20 18 16 14 12 10 8 6 4 2
Input : 5
Output : 50 45 40 35 30 25 20 15 10 5
Input : -5
Output : 50 45 40 35 30 25 20 15 10 5
*/

#include "Header.h"

int main()
{
    int iValue = 0;
    printf("Enter the Number\n");
    scanf("%d", &iValue);

    RevTable(iValue);
    return 0;
}