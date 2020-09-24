/////////////////////////////////////////////////////
//
//Function Name : StrCpyX
//Input : Character *,character *,integer
//Output : None
//Description : It is used to copy string into the another string upto the given index.
//Author : Tejas A. Bora
//Date : 26 Aug 2020
//
//////////////////////////////////////////////////////

#include "Header.h"

void StrCpyX(char *cStr, char *cStrC, int iValue)
{
    if (cStr == NULL)
    {
        printf("ERROR : NO MEMORY ADDRESS \n");
        return;
    }
    if (iValue <= 0)
    {
        printf("ERROR : INVAID INDEX\n");
        return;
    }

    while ((*cStr != '\0') && (iValue != 0))
    {
        *cStrC = *cStr;
        cStrC++;
        cStr++;
        iValue--;
    }
    *cStrC = '\0';
}