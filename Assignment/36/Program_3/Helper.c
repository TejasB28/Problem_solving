////////////////////////////////////////////////////
//
//Function Name : StrNCmpX
//Input : char *,char *,int
//Output : boolean
//Description : It is used compare two strings upto N.
//Author : Tejas A. Bora
//Date : 5 Sep 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

BOOL StrNCmpX(char *cStr1, char *cStr2, int iCnt)
{
    if ((cStr1 == FALSE) || (cStr2 == FALSE))
    {
        return FALSE;
    }

    if (iCnt < 1)
    {
        return FALSE;
    }

    while ((*cStr1 != '\0') && (*cStr2 != '\0') && (iCnt != 0))
    {
        if (*cStr1 != *cStr2)
        {
            break;
        }
        cStr1++;
        cStr2++;
        iCnt--;
    }
    if ((*cStr1 == *cStr2))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}