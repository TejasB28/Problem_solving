/*
Problem Statement :
Accept N numbers from user and return product of all odd elements.
Input : N : 6
Elements : 15 66 3 70 10 88
Output : 45

Input : N : 6
Elements : 44 66 72 70 10 88
Output : 0
*/

#include "Header.h"

int main()
{
    int iValue = 0;
    int iCnt = 0;
    int iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of values :\n");
    scanf("%d", &iValue);

    if (iValue <= 0)
    {
        printf("ERROR : INVALID NUMBER OF VALUES\n");
        return -1;
    }

    ptr = (int *)malloc(sizeof(int) * iValue);

    if (ptr == NULL)
    {
        printf("ERROR : UNABLE TO ALLOCATE MEMORY\n");
        return -1;
    }

    printf("Enter the %d values :\n", iValue);
    for (iCnt = 0; iCnt < iValue; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Product(ptr, iValue);
    if (iRet == ERRMEMORY)
    {
        printf("ERROR : INVALID MEMORY ADDRESS\n");
    }
    else if (iRet == ERRSIZE)
    {
        printf("ERROR : INVALID SIZE\n");
    }
    else
    {
        printf("Product of odd numbers :%d", iRet);
    }

    free(ptr);

    return 0;
}