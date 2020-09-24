/*
Accept sing from user and reverse the contents of that string by
toggling the case.
Input : “aCBdef”
Output : “FEDcbA”
*/

#include "Header.h"

int main()
{
    char cStr[50];

    printf("Enter the String :\n");
    scanf("%[^'\n']s", cStr);

    StrRevTogX(cStr);

    printf("String After reverse and toggle the cases : %s", cStr);

    return 0;
}