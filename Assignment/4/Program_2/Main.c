/*
Problem Statement : write a program which accept number from user and display it factors in descending order.

Input : 12
Output :  6 4 3 2 1

Input : 13 
Output : 1

Input :10
Output : 5 2 1
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    printf("Enter the Number :\n");
    scanf("%d", &iNo);

    FactRev(iNo);
    return 0;
}