/*
Write a program which accept string from user and display it inn
reverse order.
Input : “MarvellouS”
Output : “SuollevraM”
*/

#include "Header.h"

int main()
{
    char cARR[40];

    printf("Enter String :\n");
    scanf("%[^\n]s", cARR);

    Reverse(cARR);

    return 0;
}