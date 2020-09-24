/*
Write a program which accept string from user and count number of
small characters.
Input : “Marvellous”
Output : 9
*/

#include "Header.h"

int main()
{
    char cARR[50];
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^\n]s", cARR);

    iRet = CountSmall(cARR);

    printf("Count of Small letters : %d", iRet);

    return 0;
}