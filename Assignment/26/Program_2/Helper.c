/////////////////////////////////////////////////////
//
//Function Name : Display
//Input : Character
//Output : None
//Description : It is used to convert the case of character.
//Author : Tejas A. Bora
//Date : 22 Aug 2020
//
/////////////////////////////////////////////////////
#include "Header.h"

void Display(char ch)
{
    if (ch >= 65 && ch <= 90)
    {
        printf("%c\n", ch + 32);
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("%c\n", ch - 32);
    }
    else
    {
        printf("%c\n", ch);
    }
}