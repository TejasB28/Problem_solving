/*
Problem Statement :Accept the number from user and print that number of * on the screen using while loop.
*/
#include "Header.h"
int main()
{
    int iNum = 0;
    printf("Enter the Number\n");
    scanf("%d", &iNum);

    Display(iNum);
    return 0;
}