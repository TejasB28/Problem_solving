//////////////////////////////////////////////////
//
//Function Name :   Display
//Parameters :      Interger
//Return value :    none
//Description :     It prints * by user choice.
//Author :          Tejas A. Bora
//Date :            27 july 2020
//
//////////////////////////////////////////////////
#include "Header.h"

void Display(int iNum)
{
    while (iNum > 0)
    {
        printf("*");
        iNum--;
    }
}