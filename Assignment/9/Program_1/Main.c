/*
Problem Statement :
Write a program which accept number from user and print that number of $ & *
on screen.
Input : 5
Output : $ * $ * $ * $ * $ *
Input : 3
Output : $ * $ * $ *
Input : -3
Output : $ * $ * $ *
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    printf("Enter Number :\n");
    scanf("%d", &iNo);

    Pattern(iNo);
    return 0;
}