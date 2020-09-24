/*
Problem Statement : Write a program to accept one number from user and print that number of even numbers on screen.
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    printf("Enter the Number :\n");
    scanf("%d", &iNo);

    PrintEven(iNo);
    return 0;
}