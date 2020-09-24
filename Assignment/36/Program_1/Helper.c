////////////////////////////////////////////////////
//
//Function Name : StrNCatX
//Input : char *,char *,int
//Output : none
//Description : It is used concate the string upto N.
//Author : Tejas A. Bora
//Date : 5 Sep 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

void StrNCatX(char *cStr1, char *cStr2, int iCnt)
{
    if ((cStr1 == NULL) || (cStr2 == NULL))
    {
        printf("ERROR : EMPTY STRING \n");
        return;
    }

    if (iCnt < 1)
    {
        printf("ERROR : INVALID COUNT\n");
        return;
    }
    while (*cStr1 != '\0')
    {
        cStr1++;
    }

    *cStr1 = ' ';
    cStr1++;

    while ((*cStr2 != '\0') && (iCnt != 0))
    {
        *cStr1 = *cStr2;
        cStr1++;
        cStr2++;
        iCnt--;
    }
    *cStr1 = '\0';
}