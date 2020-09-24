/////////////////////////////////////////////////////
//
//Function Name : Display
//Input : Integer *,Integer
//Output : None
//Description : It is used to find Multiple of 5 from N numbers.
//Author : Tejas A. Bora
//Date : 19 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

void Display(int arr[], int iSize)
{
    int iCnt = 0;
    if (arr == NULL)
    {
        printf("ERROR : invalid memory address\n");
        return;
    }
    else if (iSize <= 0)
    {
        printf("ERROR : invalid size\n");
        return;
    }
    else
    {
        printf("Divisible Numbers are : ");

        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            if ((arr[iCnt] % 5) == 0)
            {
                printf("%d\t", arr[iCnt]);
            }
        }
    }
}