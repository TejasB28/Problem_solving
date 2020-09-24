/*
Problem Statement :
Write a program which accept number from user and count frequency of such a
digits which are less than 6.
Input : 2395
Output : 3
Input : 1018
Output : 3
Input : 9440
Output : 3
Input : 96672
Output : 1
*/
#include "Header.h"

int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter the Number:\n");
    scanf("%d", &iNo);

    iRet = Count(iNo);
    printf("Count of digits less than 6 are :%d", iRet);
    return 0;
}