/////////////////////////////////////////////////////
//
//Function Name : CountSmall
//Input : Character
//Output : integer
//Description : It is used to return small charcters in string.
//Author : Tejas A. Bora
//Date : 24 Aug 2020
//
/////////////////////////////////////////////////////
#include "Header.h"

int CountSmall(char *str)
{
    int iCnt = 0, iSmall = 0;

    while (str[iCnt] != '\0')
    {
        if (str[iCnt] >= 'a' && str[iCnt] <= 'z')
        {
            iSmall++;
        }
        iCnt++;
    }
    return iSmall;
}