/*
Write a program which accept string from user and convert it into
upper case.
Input : “Marvellous Multi OS”
Output : MARVELLOUS MULTI OS
*/

#include "Header.h"

int main()
{
    char cARR[50];
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^\n]s", cARR);

    struprx(cARR);

    return 0;
}