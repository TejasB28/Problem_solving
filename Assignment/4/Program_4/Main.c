/*
Problem Statement :Write a program which accept number from user and return summation of all its non factors.

Input : 12
Output : 50
INput  : 10
Output : 37
*/
#include "Header.h"

int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter the Number :\n");
    scanf("%d", &iNo);

    iRet = SumNonFact(iNo);
    if (iRet == -1)
    {
        printf("Not Valid\n");
    }
    else
    {
        printf("Sum of all non factors is :%d\n", iRet);
    }

    return 0;
}