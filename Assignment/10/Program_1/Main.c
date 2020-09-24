/*
Problem Statement : 
Write a program which accept radius of circle from user and calculate its area.
Consider value of PI as 3.14. (Area = PI * Radius * Radius)
Input : 5.3
Output : 88.2026
Input : 10.4
Output : 339.6224
*/

#include "Header.h"

int main()
{
    float fRadius = 0.0;
    double dRet = 0.0;
    printf("Enter the Radius of circle :\n");
    scanf("%f", &fRadius);
    dRet = CircleArea(fRadius);
    printf("Area of Circle is : %lf", dRet);
    return 0;
}