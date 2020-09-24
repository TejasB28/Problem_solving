/////////////////////////////////////////////////////
//
//Function Name : Digits
//Input : Integer *,Integer
//Output : None
//Description : It is used to return 3 digits number from N numbers.
//Author : Tejas A. Bora
//Date : 20 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

void Digits(int *arr, int iSize)
{
    int iCnt = 0, iCount = 0, iNo = 0, iChk = 0;

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

    printf("3 digits numbers are :");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iNo = arr[iCnt]; //373
        iCount = 0;
        while (iNo != 0)
        {
            iNo = iNo / 10; //373  37  3  0
            iCount++;
        }
        if (iCount == 3)
        {
            printf("%d\t", arr[iCnt]);
            iChk = 3;
        }
    }
    if (iChk == 0)
    {
        printf("0");
    }
}