/*
Problem Statement :
Accept N numbers from user and return frequency of even numbers.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 3
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

    iRet = CountEven(ptr, iValue);
    if (iRet == ERRARRAY)
    {
        printf("ERROR : ADDRESS NOT FOUND\n");
    }
    else if (iRet == ERRSIZE)
    {
        printf("ERROR : INVALID SIZE\n ");
    }
    else
    {
        printf("Count of Even Numbers is %d", iRet);
    }

    return 0;
}