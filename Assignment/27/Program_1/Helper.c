/////////////////////////////////////////////////////
//
//Function Name : CountCapital
//Input : Character
//Output : integer
//Description : It is used to return capital charcters in string.
//Author : Tejas A. Bora
//Date : 24 Aug 2020
//
/////////////////////////////////////////////////////
#include "Header.h"

int CountCapital(char *str)
{
    int iCnt = 0, iCapital = 0;

    // if (str == NULL)
    // {
    //     return -1;
    // }

    while (str[iCnt] != '\0')
    {
        if (str[iCnt] >= 'A' && str[iCnt] <= 'Z')
        {
            iCapital++;
        }
        iCnt++;
    }
    return iCapital;
}