/////////////////////////////////////////////////////
//
//Function Name : DigitsSum
//Input : Integer *,Integer
//Output : None
//Description : It is used to sum of all digits from N numbers.
//Author : Tejas A. Bora
//Date : 20 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

void DigitsSum(int *arr, int iSize)
{
    int iCnt = 0, iNo = 0, iSum = 0;

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
    printf("Summation of Digits :\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iNo = arr[iCnt];
        iSum = 0;

        while (iNo != 0)
        {
            iSum += iNo % 10;
            iNo = iNo / 10;
        }
        printf("%d  -->  %d \n", arr[iCnt], iSum);
    }
}