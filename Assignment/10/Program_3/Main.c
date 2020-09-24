/*
Problem Statement : 
Write a program which accept distance in kilometre and convert it into meter. (1
kilometre = 1000 Meter)
Input : 5
Output : 5000
Input : 12
Output : 12000
*/

#include "Header.h"

int main()
{
    int iKm = 0;
    int iMeter = 0;
    printf("Enter distance in Km :\n");
    scanf("%d", &iKm);

    iMeter = KMtoMeter(iKm);
    printf("Distance in meter is :%d", iMeter);
    return 0;
}
