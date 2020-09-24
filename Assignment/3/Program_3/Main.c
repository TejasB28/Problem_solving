/*
Problem Statement :Write a program which accept  number from user and print even factor of that Number.
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    printf("Enter the Number :\n");
    scanf("%d", &iNo);

    PrintEvenFact(iNo);
    return 0;
}