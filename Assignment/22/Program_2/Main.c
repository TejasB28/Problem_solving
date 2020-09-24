/*
problem Statement :
Accept N numbers from user and return difference between frequency of
even number and odd numbers.

Input : N : 7
Elements : 85 66 3 80 93 88 90
Output : 1 (4 -3)
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
        printf("ERROR : INVALID SIZE\n");
        return -1;
    }

    ptr = (int *)malloc(sizeof(int) * iValue);

    if (ptr == NULL)
    {
        printf("ERROR : Unable to allocate memory \n");
        return -1;
    }

    printf("Enter the %d Numbers :\n", iValue);
    for (iCnt = 0; iCnt < iValue; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Frequency(ptr, iValue);

    printf("Count of Even Numbers is %d", iRet);

    return 0;
}