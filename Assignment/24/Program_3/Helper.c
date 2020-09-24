/////////////////////////////////////////////////////
//
//Function Name : Difference
//Input : Integer *,Integer
//Output : Integer
//Description : It is used to find Difference between max and min from N numbers.
//Author : Tejas A. Bora
//Date : 20 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

int Difference(int *arr, int iSize)
{
    int iCnt = 0, iMax = 0, iMin = 0, iNo = 0;

    if (arr == NULL)
    {
        printf("ERROR : INVALID MEMORY ADDRESS\n");
    }
    if (iSize <= 0)
    {
        printf("ERROR : INVALID SIZE\n");
    }

    iMax = arr[0];
    iMin = arr[0];

    for (iCnt = 1; iCnt < iSize; iCnt++)
    {
        iNo = arr[iCnt];
        if (iNo > iMax)
        {
            iMax = iNo;
        }
        if (iNo < iMin)
        {
            iMin = iNo;
        }
    }
    return iMax - iMin;
}