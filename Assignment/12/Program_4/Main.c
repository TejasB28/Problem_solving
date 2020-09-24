/*
Problem Statement :
Write a program to find odd factorial of given number.
Input : 5
Output : 15 (5 * 3 * 1)
Input : -5
Output : 15 (5 * 3 * 1)
Input : 10
Output : 945 (9 * 7 * 5 * 3 * 1)
*/
#include "Header.h"

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number:\n");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);
    printf("odd factorial of Number :%d", iRet);
    return 0;
}