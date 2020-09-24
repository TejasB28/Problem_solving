/*
Accept N numbers from user and display summation of digits of each
number.
Input : N : 6
Elements : 8225 665 3 76 953 858
Output :    17   17 3 13 17  21
*/

#include "Header.h"

int main()
{
    int iValue = 0;
    int iCnt = 0;
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

    DigitsSum(ptr, iValue);

    free(ptr);

    return 0;
}