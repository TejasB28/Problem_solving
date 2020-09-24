/////////////////////////////////////////////////////
//
//Function Name : Display
//Input : Character
//Output : None
//Description : It is used to display all the characters from the input characters till Z. If input character is small
//              then print all the characters in reverse order till a..
//Author : Tejas A. Bora
//Date : 22 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

void Display(char ch)
{
    int iCnt = 0;

    if (ch >= 65 && ch <= 90)
    {
        for (iCnt = ch; iCnt <= 90; iCnt++)
        {
            printf("%c\t", iCnt);
        }
    }
    else if (ch >= 97 && ch <= 122)
    {
        for (iCnt = ch; iCnt >= 97; iCnt--)
        {
            printf("%c\t", iCnt);
        }
    }
    else
    {
        printf("%c\n", ch);
    }
}