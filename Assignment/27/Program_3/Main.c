/*
Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.
Input : “MarvellouS”
Output : 6 (8-2)
*/

#include "Header.h"

int main()
{
    char cARR[50];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^\n]s", cARR);

    iRet = Difference(cARR);

    printf("Difference between number of small and capital letters is : %d\n", iRet);

    return 0;
}