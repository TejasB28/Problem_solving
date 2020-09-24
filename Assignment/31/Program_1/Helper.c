////////////////////////////////////////////////////////
//
//Function Name : StrCpyRev
//Input : Character *,Character *
//Output : None
//Description : It is used to copy the string into another string in reverse order.
//Author : Tejas A. Bora
//Date : 31 Aug 2020
//
/////////////////////////////////////////////////////////

#include "Header.h"

void StrCpyRev(char *cStr, char *cStrC)
{
    int iCnt = 0;
    while (cStr[iCnt] != '\0')
    {
        iCnt++;
    }

    iCnt--;

    while (iCnt != -1)
    {
        *cStrC = cStr[iCnt];
        cStrC++;
        iCnt--;
    }
    *cStrC = '\0';
}