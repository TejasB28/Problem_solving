/*
Write a program which accept string from user and count number of
capital characters.
Input : “Marvellous Multi OS”
Output : 4
*/

#include "Header.h"

int main()
{
    char cARR[50];
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^\n]s", cARR);

    iRet = CountCapital(cARR);
    // if (iRet == -1)
    // {
    //     printf("ERROR : NULL ARRAY\n");
    // }
    // else
    // {
    printf("Count of Capital letters : %d", iRet);
    // }

    return 0;
}