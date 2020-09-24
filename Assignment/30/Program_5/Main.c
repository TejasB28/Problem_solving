/*
Problem Statement :
Write a program which 2 strings from user and concat second string
after first string. (Implement strcat() function).
Input : “Marvellous Infosystems”
“Logic Building”
Output : “Marvellous Infosystems Logic Building”
*/

#include "Header.h"

int main()
{
    char cArr1[50];
    char cArr2[50];

    printf("Enter 1st String :\n");
    scanf(" %[^\n]s", cArr1);

    printf("Enter 2nd String :\n");
    scanf(" %[^\n]s", cArr2);

    StrCatX(cArr1, cArr2);

    printf("Concatenated String is : %s", cArr1);

    return 0;
}