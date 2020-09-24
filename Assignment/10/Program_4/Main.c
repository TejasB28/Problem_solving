/*
Write a program which accept temperature in Fahrenheit and convert it into
celsius. (1 celsius = (Fahrenheit -32) * (5/9))
Input : 10
Output : -12.2222 (10 - 32) * (5/9)
Input : 34
Output : 1.11111 (34 - 32) * (5/9)
*/

#include "Header.h"

int main()
{
    float fTemp = 0.0;
    double dCel = 0.0;
    printf("Enter the Temperature in Fahrenheit :\n");
    scanf("%f", &fTemp);

    dCel = FhtoCs(fTemp);

    printf("Temperature in Celcius : %lf", dCel);
    return 0;
}