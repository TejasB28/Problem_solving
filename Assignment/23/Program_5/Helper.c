/////////////////////////////////////////////////////
//
//Function Name : Product
//Input : Integer *,Integer
//Output : Integer
//Description : It is used to return product of odd numbers from N numbers.
//Author : Tejas A. Bora
//Date : 20 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

int Product(int *arr, int iSize)
{
    int iCnt = 0, iProduct = 1;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((arr[iCnt] % 2) != 0)
        {
            iProduct *= arr[iCnt];
        }
    }
    if (iProduct == 1)
    {
        return 0;
    }
    else
    {
        return iProduct;
    }
}