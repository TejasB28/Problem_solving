/*
Accept N numbers from user and return the largest number.
Input : N : 6
Elements : 85 66 3 66 93 88
Output : 93
*/

#include "Header.h"

int main()
{
    int iValue = 0;
    int iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

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

    iRet = Maximum(ptr, iValue);

    printf("Maximum Number is : %d ", iRet);

    free(ptr);

    return 0;
}