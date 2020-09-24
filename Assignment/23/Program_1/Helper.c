/////////////////////////////////////////////////////
//
//Function Name : Check
//Input : Integer *,Integer,Integer
//Output : Boolean
//Description : It is used to check number is present or not from N numbers.
//Author : Tejas A. Bora
//Date :  20 Aug 2020
//
/////////////////////////////////////////////////////
#include "Header.h"

BOOL Check(int arr[], int iSize, int iNumber)
{
    int iCnt = 0, iNo = 0;

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
            iNo = arr[iCnt];
            break;
        }
    }
    if (iNo == iNumber)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}