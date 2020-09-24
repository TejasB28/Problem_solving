/////////////////////////////////////////////////////
//
//Function Name : LastOcc
//Input : Integer *,Integer,Integer
//Output : Integer
//Description : It is used to return last Occurance of number from N numbers.
//Author : Tejas A. Bora
//Date : 20 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

int LastOcc(int arr[], int iSize, int iNumber)
{
    int iCnt = 0, iOcc = 0;

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
            iOcc = iCnt;
        }
    }
    if (iOcc != 0)
    {
        return iOcc;
    }
    else
    {
        return -1;
    }
}