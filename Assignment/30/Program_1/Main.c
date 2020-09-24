/*
Problem Statement :
Write a program which accept string from user and copy the
contents of that string into another string. (Implement strcpy()
function)
Input : “Marvellous Multi OS”
Output : “Marvellous Multi OS” in another string
*/

#include "Header.h"

int main()
{
    char cArr[50];
    char cCpy[50];

    printf("Enter String :\n");
    scanf("%[^\n]s", cArr);

    StrCpyX(cArr, cCpy);

    printf("Copied String is : %s", cCpy);

    return 0;
}