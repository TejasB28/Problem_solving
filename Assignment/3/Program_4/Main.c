/*
Problem Statement :Accept one character from user and convert case of that character.
*/

#include "Header.h"

int main()
{
    char cValue = "\0";
    printf("Enter the Character :\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);
    return 0;
}
