/*
Problem Statement : write a program which accept 3 numbers from user and print its multiplication.
Input : 5 4 7
Output : 140
Input : 5 0 7
Output : 35
Input : 5 0 0
Output : 5
Input : 0 0 0
Output : 0
*/

#include "Header.h"

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;
    printf("Enter the three Numbers :\n");
    scanf("%d%d%d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);
    printf("Multiplication of three numbers is :%d", iRet);
    return 0;
}
