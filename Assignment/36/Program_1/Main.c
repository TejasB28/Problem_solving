/*
Write a program which accepts 2 strings from user and concat N
characters of second string after first string.Value of N should be
accepted from user. (Implement strncat() function).
Note : If third parameter is greater than the size of second string then
concat whole string after first string.

Input : “Marvellous Infosystems”
“Logic Building”
5
Output : “Marvellous Infosystems Logic”
*/

#include "Header.h"

int main()
{
    char cStr1[50];
    char cStr2[50];
    int iNo = 0;

    printf("Enter the 1st String :\n");
    scanf("%[^'\n']s", cStr1);

    printf("Enter the 2nd String :\n");
    scanf(" %[^'\n']s", cStr2);

    printf("How many character you want to concate :\n");
    scanf("%d", &iNo);

    StrNCatX(cStr1, cStr2, iNo);

    printf("Concatenated String is : %s", cStr1);

    return 0;
}