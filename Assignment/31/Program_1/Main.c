/*
Problem Statement :
Write a program which accept string from user and copy that
characters of that string into another string in reverse order.
Input : “Marvellous Python”
Output : “nohtyP suollevraM”
*/

#include "Header.h"

int main()
{
    char cArr[50];
    char cArrC[50];

    printf("Enter the String :\n");
    scanf("%[^\n]s", cArr);

    StrCpyRev(cArr, cArrC);

    printf("Reversed String is : %s", cArrC);

    return 0;
}