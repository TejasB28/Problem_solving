/*
Write a program which accept string from user and copy that
characters of that string into another string by toggling the case.
Input : “Marvellous Python 2”
Output : “mARVELLOUS pYTHON 2”
*/

#include "Header.h"

int main()
{
    char cArr[50];
    char cArrC[50];

    printf("Enter the String :\n");
    scanf("%[^'\n']s", cArr);

    StrCpyToggle(cArr, cArrC);

    printf("String After toggle the cases : %s", cArrC);

    return 0;
}