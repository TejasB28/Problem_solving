/*
Problem Statement :Accept number from user if number is less than 10 then print "Hello" otherwise print "Demo".
*/
#include "Header.h"

int main()
{
    int iNum = 0;
    printf("Enter the Number : ");
    scanf("%d", &iNum);

    Display(iNum);
    return 0;
}