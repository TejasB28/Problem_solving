//////////////////////////////////////////////////
//
//Function Name :   Divide
//Parameters :      Integer,Interger
//Return value :    Integer
//Description :     It Divide two Numbers.
//Author :          Tejas A. Bora
//Date :            27 july 2020
//
//////////////////////////////////////////////////
#include "Header.h"

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;
    if (iNo2 == 0)
    {
        return -1;
    }
    iAns = iNo1 / iNo2;
    return iAns;
}