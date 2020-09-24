/*
Problem Statement : Write a program which accept name from user and print that name.
Input : Tejas Bora
Output : Tejas Bora
*/

#include "Header.h"

int main()
{
    char cName[30];
    printf("Enter Name :\n");
    scanf("%[^\n]s", &cName);
    printf("Your name is %s", cName);
    return 0;
}