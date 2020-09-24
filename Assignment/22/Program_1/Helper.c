/////////////////////////////////////////////////////
//
//Function Name : CountEven
//Input : Integer *,Integer
//Output : Integer
//Description : It is used to find frequency of even numbers from N numbers.
//Author : Tejas A. Bora
//Date : 19 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

int CountEven(int *arr, int iSize)
{
    int iCnt = 0, iEven = 0;

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
        if ((arr[iCnt] % 2) == 0)
        {
            iEven++;
        }
    }
    return iEven;
}