/*
Write a program which accept string from user and print below
pattern.
Input : “Marvellous”
Output :m a r v e l l o u s
        m a r v e l l o u s
        m a r v e l l o u s
        m a r v e l l o u s
        m a r v e l l o u s
        m a r v e l l o u s
        m a r v e l l o u s
        m a r v e l l o u s
        m a r v e l l o u s
        m a r v e l l o u s
Input : “PPA”
Output :p
        p p
        p p a
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