/////////////////////////////////////////////////////
//
//Function Name : Frequency
//Input : Integer *,Integer
//Output : Integer
//Description : It is used to return Frequency of 11 from N numbers.
//Author : Tejas A. Bora
//Date : 19 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

int Frequency(int *arr, int iSize)
{
    int iCnt = 0, iCount = 0;

    if (arr == NULL)
    {
        return ERRARRAY;
    }
    if (iSize <= 0)
    {
        return ERRSIZE;
    }
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] % 11 == 0)
        {
            iCount++;
        }
    }
    return iCount;
}