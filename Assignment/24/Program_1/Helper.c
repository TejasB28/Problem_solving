/////////////////////////////////////////////////////
//
//Function Name : Maximum
//Input : Integer *,Integer
//Output : Integer
//Description : It is used to return maximum number from N numbers.
//Author : Tejas A. Bora
//Date : 20 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

int Maximum(int *arr, int iSize)
{
    int iCnt = 0, iMax = 0, iNo = 0;
    if (arr == NULL)
    {
        printf("ERROR : INVALID MEMORY ADDRESS\n");
    }
    if (iSize <= 0)
    {
        printf("ERROR : INVALID SIZE\n");
    }

    iMax = arr[0];

    for (iCnt = 1; iCnt < iSize; iCnt++)
    {
        iNo = arr[iCnt];
        if (iNo > iMax)
        {
            iMax = iNo;
        }
    }
    return iMax;
}