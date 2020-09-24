//////////////////////////////////////////////////
//
//Function Name :   Display
//Parameters :      Interger,Integer
//Return value :    none
//Description :     It prints the number n times.
//Author :          Tejas A. Bora
//Date :            27 july 2020
//
//////////////////////////////////////////////////
#include "Header.h"

void Display(int iNo, int iFrequency)
{
    int i = 0;

    for (i = 1; i <= iFrequency; i++)
    {
        printf("%d\t", iNo);
    }
}