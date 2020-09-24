/*
Problem Statement :
Write a program which accept area in square feet and convert it into square
meter. (1 square feet = 0.0929 Square meter)
Input : 5
Output : 0.464515
Input : 7
Output : 0.650321
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    double dRet = 0.0;
    printf("Enter Area in Sqaure Feet :\n");
    scanf("%d", &iNo);

    dRet = SquareMeter(iNo);
    printf("Area in Square meter is :%lf", dRet);
    return 0;
}