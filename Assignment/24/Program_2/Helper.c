/////////////////////////////////////////////////////
//
//Function Name : Minimum
//Input : Integer *,Integer
//Output : Integer
//Description : It is used to return Minimum number from N numbers.
//Author : Tejas A. Bora
//Date : 20 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

int Minimum(int *arr, int iSize)
{
    int iCnt = 0, iMin = 0, iNo = 0;
    if (arr == NULL)
    {
        printf("ERROR : INVALID MEMORY ADDRESS\n");
    }
    if (iSize <= 0)
    {
        printf("ERROR : INVALID SIZE\n");
    }

    iMin = arr[0];

    for (iCnt = 1; iCnt < iSize; iCnt++)
    {
        iNo = arr[iCnt];
        if (iNo < iMin)
        {
            iMin = iNo;
        }
    }
    return iMin;
}