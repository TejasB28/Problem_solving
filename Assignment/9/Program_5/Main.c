/*
Problem Statement :
Write a program which accept N and print first 5 multiples of N.
Input : 4
Output : 4 8 12 16 20
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    printf("Enter Number :\n");
    scanf("%d", &iNo);

    MultipleDisplay(iNo);
    return 0;
}