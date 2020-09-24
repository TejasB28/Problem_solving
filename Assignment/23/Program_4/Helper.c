/////////////////////////////////////////////////////
//
//Function Name : Range
//Input : Integer *,Integer,Integer,Integer
//Output : none
//Description : It is used to print numbers between perticular range from N numbers.
//Author : Tejas A. Bora
//Date : 20 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

void Range(int *arr, int iSize, int iStart, int iEnd)
{
    int iCnt = 0, iNo = 0;
    if (arr == NULL)
    {
        printf("ERROR : INVALID MEMORY ADDRESS\n");
        return;
    }
    if (iSize <= 0)
    {
        printf("ERROR : INVALID SIZE\n");
        return;
    }
    printf("Elements in Range :");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] >= iStart && arr[iCnt] <= iEnd)
        {
            iNo++;
            printf("%d\t", arr[iCnt]);
        }
    }
    if (iNo == 0)
    {
        printf("0");
    }
}