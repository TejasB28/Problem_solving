/*
Write a program which accept string from user and print below
pattern.
Input : “Marvellous”
Output :M
        M a
        M a r
        M a r v
        M a r v e
        M a r v e l
        M a r v e l l
        M a r v e l l o
        M a r v e l l o u
        M a r v e l l o u s
Input : “PPA”
Output : P
         P P
         P P A
*/

#include "Header.h"

int main()
{
    char cStr[50];

    printf("Enter the String :\n");
    scanf("%[^'\n']s", cStr);

    Pattern(cStr);

    return 0;
}