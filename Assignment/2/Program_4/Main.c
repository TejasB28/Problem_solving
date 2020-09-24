/*
Problem Statement :Accept two Numbers from user and display first number in second number of times.
*/
#include "Header.h"

int main()
{
    int iValue = 0;
    int iCount = 0;
    printf("Enter the Number :\n");
    scanf("%d", &iValue);
    printf("Enter the Occurance :\n");
    scanf("%d", &iCount);

    Display(iValue, iCount);
    return 0;
}