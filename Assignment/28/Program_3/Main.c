/*
Write a program which accept string from user and toggle the case.
Input : “Marvellous Multi OS”
Output : mARVELLOUS mULTI os
*/

#include "Header.h"

int main()
{
    char cARR[50];

    printf("Enter String\n");
    scanf("%[^\n]s", cARR);

    strtogglex(cARR);

    return 0;
}