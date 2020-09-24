/*
Problem Statement :
Write a program which accept number from user and count frequency of 4 in it.
Input : 2395
Output : 0
Input : 1018
Output : 0
Input : 9440
Output : 2
Input : 922432
Output : 1
*/
#include "Header.h"

int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter the Number:\n");
    scanf("%d", &iNo);

    iRet = CountFour(iNo);
    printf("Count of 4's are :%d", iRet);
    return 0;
}