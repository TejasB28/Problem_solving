//////////////////////////////////////////////////
//
//Function Name :   Check
//Parameters :      Interger
//Return value :    Boolean
//Description :     It checks whether number is divisible by 5 or not.
//Author :          Tejas A. Bora
//Date :            27 july 2020
//
//////////////////////////////////////////////////
#include "Header.h"

BOOL Check(int iNo)
{
    if ((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}