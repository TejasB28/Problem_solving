/////////////////////////////////////////////////////
//
//Function Name : Difference
//Input : Integer
//Output : Integer,Integer
//Description : It is used to find differnce between sum of even and odd from N numbers.
//Author : Tejas A. Bora
//Date : 19 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

int Difference(int arr[], int iSize)
{
    int iCnt = 0;
    int iDiff = 0;
    if (arr == NULL)
    {
        printf("ERROR : Invalid memory address\n");
        return 0;
    }
    if (iSize < 0)
    {
        printf("ERROR : Invalid size\n");
        return 0;
    }
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((arr[iCnt] % 2) == 0)
        {
            iDiff += arr[iCnt];
        }
        else
        {
            iDiff -= arr[iCnt];
        }
    }
    return iDiff;
}