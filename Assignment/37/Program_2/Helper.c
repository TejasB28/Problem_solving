////////////////////////////////////////////////////
//
//Function Name : WordMaxLength
//Input : char *
//Output : int
//Description : It is used to count length of largest string.
//Author : Tejas A. Bora
//Date : 5 Sep 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

int WordMaxLength(char *cStr)
{
    int iMax = 0, iTemp = 0;

    if (cStr == NULL)
    {
        return -1;
    }

    while (*cStr != '\0')
    {

        if ((*cStr == ' ') && (*cStr != '\0'))
        {
            iTemp = 0;
            cStr++;
        }

        else
        {
            if (*cStr != ' ')
            {
                iTemp++;
                cStr++;
            }
            if (iMax < iTemp)
            {
                iMax = iTemp;
            }
        }
    }
    return iMax;
}