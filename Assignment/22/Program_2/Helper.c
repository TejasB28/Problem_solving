/////////////////////////////////////////////////////
//
//Function Name : Frequency
//Input : Integer *,Integer
//Output : Integer
//Description : It is used to return differnce between frquency of even and odd numbers from N numbers.
//Author : Tejas A. Bora
//Date : 19 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

int Frequency(int *arr, int iSize)
{
    int iCnt = 0, iDiff = 0;
    if (arr == NULL)
    {
        printf("ERROR : ADDRESS NOT FOUND\n");
    }
    else if (iSize <= 0)
    {
        printf("ERROR : INVALID SIZE\n ");
    }
    else
    {
        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            if ((arr[iCnt] % 2) == 0)
            {
                iDiff++;
            }
            else
            {
                iDiff--;
            }
        }
    }

    return iDiff;
}