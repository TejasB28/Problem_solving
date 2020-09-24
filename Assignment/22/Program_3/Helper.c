/////////////////////////////////////////////////////
//
//Function Name : Check
//Input : Integer *,Integer
//Output : Boolean
//Description : It is used to check 11 is present or not in N numbers.
//Author : Tejas A. Bora
//Date : 19 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

BOOL Check(int *arr, int iSize)
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
        if (arr[iCnt] % 11 == 0)
        {
            iNo = arr[iCnt];
            break;
        }
    }
    if (iNo == 11)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}