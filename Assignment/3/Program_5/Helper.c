//////////////////////////////////////////////////
//
//Function Name :   ChkVowel
//Parameters :      Character
//Return value :    BOOLEAN
//Description :     It is used to check character is vowel or not.
//Author :          Tejas A. Bora
//Date :            2 Aug 2020
//
//////////////////////////////////////////////////

#include "Header.h"

BOOL ChkVowel(char cVal)
{
    if (cVal == 'a' || cVal == 'e' || cVal == 'i' || cVal == 'o' || cVal == 'u' || cVal == 'A' || cVal == 'E' || cVal == 'I' || cVal == 'O' || cVal == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
