/*
Write a program which accept number from user and return the count of even
digits.
Input : 2395
Output : 1
Input : 1018
Output : 2
Input : -1018
Output : 2
Input : 8462
Output : 4
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter the Number :\n");
    scanf("%d", &iNo);

    iRet = CountEven(iNo);

    printf("Count of Even numbers :%d", iRet);
    return 0;
}