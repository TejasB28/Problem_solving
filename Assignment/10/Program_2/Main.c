/*
Problem Statement :
Write a program which accept width & height of rectangle from user and calculate
its area. (Area = Width * Height)
Input : 5.3 9.78
Output : 51.834
*/
#include "Header.h"

int main()
{
    float fHeight = 0.0;
    float fWidth = 0.0;
    double dRet = 0.0;
    printf("Enter Height :\n");
    scanf("%f", &fHeight);
    printf("Enter Width :\n");
    scanf("%f", &fWidth);

    dRet = RectArea(fHeight, fWidth);
    printf("Area of Rectangle is :%lf", dRet);
    return 0;
}