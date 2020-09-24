/*
Problem Statement : Accept Number from user and print that number of *  on screen using for loop.
*/
#include "Header.h"
int main()
{
    int iNum = 0;
    //Dyanamic
    printf("Enter the Number :\n");
    scanf("%d", &iNum);

    Display(iNum);
    return 0;
}