////////////////////////////////////////////////////
//
//Function Name : Reverse
//Input : Character
//Output : none
//Description : It is used to print string in reverse order..
//Author : Tejas A. Bora
//Date : 24 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

void Reverse(char *arr)
{
    int iCnt = 0, iCount = 0;

    while (arr[iCnt] != '\0')
    {
        iCount++;
        iCnt++;
    }

    for (iCnt = iCount - 1; iCnt >= 0; iCnt--)
    {
        printf("%c", arr[iCnt]);
    }
}