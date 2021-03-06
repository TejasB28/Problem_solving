/*
Accept N numbers from user and accept one another number as NO ,
return frequency of NO form it.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 2
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : 0
*/

#include "Header.h"

int main()
{
    int iValue = 0;
    int iNo = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the number of values :\n");
    scanf("%d", &iValue);

    if (iValue <= 0)
    {
        printf("ERROR : INVALID NUMBER OF VALUES\n");
        return -1;
    }
    printf("Enter the Number :\n");
    scanf("%d", &iNo);

    ptr = (int *)malloc(sizeof(int) * iValue);

    if (ptr == NULL)
    {
        printf("ERROR : unbale to Allocate Memory\n");
        return -1;
    }

    printf("Enter %d Numbers \n", iValue);
    for (iCnt = 0; iCnt < iValue; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Frequency(ptr, iValue, iNo);
    if (iRet == ERRARRAY)
    {
        printf("ERROR : Invalid memory address\n");
    }
    else if (iRet == ERRSIZE)
    {
        printf("ERROR : Invalid size\n");
    }
    else
    {
        printf("Frequency of %d is  :%d", iNo, iRet);
    }

    return 0;
}