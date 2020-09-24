/*
Write a program which accept string from user and count number of
white spaces
Input : “MarvellouS”
Output : 0
Input : “MarvellouS Infosystems”
Output : 1
Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
Output : 5
*/

#include "Header.h"

int main()
{
    char cARR[40];
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^\n]s", cARR);

    iRet = CountWhite(cARR);

    printf("White spaces in String is : %d", iRet);

    return 0;
}