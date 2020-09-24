/*
Problem Statement :
Write a program which accept string from user and copy the
contents of that string into another string. (Implement strncpy()
function)
Input : “Marvellous Multi OS”
10
Output : “Marvellous
*/

#include "Header.h"

int main()
{
    char cArr[50];
    char cArrcpy[50] = {0};
    int iNo = 0;

    printf("Enter the String :\n");
    scanf("%[^\n]s", cArr);

    printf("Enter the index upto you want to copy the string :\n");
    scanf("%d", &iNo);

    StrCpyX(cArr, cArrcpy, iNo);

    printf("copied String is : %s", cArrcpy);

    return 0;
}