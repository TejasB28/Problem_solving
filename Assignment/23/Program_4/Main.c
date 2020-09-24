/*
Problem Statement :
Accept N numbers from user and accept Range, Display all elements from
that range

Input : N : 6
Start: 60
End : 90
Elements : 85 66 3 76 93 88
Output : 66 76 88

Input : N : 6
Start: 30
End : 50
Elements : 85 66 3 76 93 88
Output : -1
*/

#include "Header.h"

int main()
{
    int iValue = 0;
    int iStart = 0;
    int iEnd = 0;
    int iCnt = 0;
    int *ptr = NULL;

    printf("Enter the number of values :\n");
    scanf("%d", &iValue);

    if (iValue <= 0)
    {
        printf("ERROR : INVALID NUMBER OF VALUES\n");
        return -1;
    }

    printf("Enter the Starting Range :\n");
    scanf("%d", &iStart);

    printf("Enter the Ending Range :\n");
    scanf("%d", &iEnd);

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

    Range(ptr, iValue, iStart, iEnd);

    free(ptr);

    return 0;
}