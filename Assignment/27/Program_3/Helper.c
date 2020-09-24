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

int Difference(char *str)
{
    int iCnt = 0, iDiff = 0;

    while (str[iCnt] != '\0')
    {
        if (str[iCnt] >= 65 && str[iCnt] <= 90)
        {
            printf("Capital");
            iDiff--;
        }
        else if (str[iCnt] >= 97 && str[iCnt] <= 122)
        {
            printf("Small");
            iDiff++;
        }
        iCnt++;
    }
    return iDiff;
}