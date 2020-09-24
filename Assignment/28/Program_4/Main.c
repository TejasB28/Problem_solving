/*
Write a program which accept string from user and display only
digits from that string.
Input : “marve89llous121”
Output : 89121
Input : “Demo”
*/

#include "Header.h"

int main()
{
    char cARR[50];

    printf("Enter String :\n");
    scanf("%[^\n]s", cARR);

    Display(cARR);

    return 0;
}
