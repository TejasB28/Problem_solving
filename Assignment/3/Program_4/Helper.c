//////////////////////////////////////////////////
//
//Function Name :   DisplayConvert
//Parameters :      Character
//Return value :    None
//Description :     It is used to convert the case of character.
//Author :          Tejas A. Bora
//Date :            2 Aug 2020
//
//////////////////////////////////////////////////
#include "Header.h"

void DisplayConvert(char cVal)
{
    if (cVal >= 65 && cVal <= 90)
    {
        printf("%c", cVal + 32);
    }
    else if (cVal >= 97 && cVal <= 127)
    {
        printf("%c", cVal - 32);
    }
}