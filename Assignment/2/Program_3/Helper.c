//////////////////////////////////////////////////
//
//Function Name :   Display
//Parameters :      Interger
//Return value :    none
//Description :     It prints hello if number less than 10 otherwise demo.
//Author :          Tejas A. Bora
//Date :            27 july 2020
//
//////////////////////////////////////////////////

#include "Header.h"

void Display(int iNo)
{
    if (iNo < 10)
    {
        printf("Hello!");
    }
    else
    {
        printf("Demo");
    }
}