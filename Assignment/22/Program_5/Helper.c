/////////////////////////////////////////////////////
//
//Function Name : Frequency
//Input : Integer *,Integer,Integer
//Output : Integer
//Description : It is used to return Frequency of number from N numbers.
//Author : Tejas A. Bora
//Date : 19 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

int Frequency(int *arr, int iSize, int iNumber)
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
        if (arr[iCnt] == iNumber)
        {
            iCount++;
        }
    }
    return iCount;
}
