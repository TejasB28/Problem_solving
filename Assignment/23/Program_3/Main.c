/*
Problem Statement :
Accept N numbers from user and accept one another number as NO ,
return index of last occurrence of that NO.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 3

Input : N : 6
NO: 93
Elements : 85 66 3 66 93 88
Output : 4

Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : -1
*/

#include "Header.h"

int main()
{
    int iValue = 0;
    int iNo = 0;
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

    printf("Enter the Number :\n");
    scanf("%d", &iNo);

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

    iRet = LastOcc(ptr, iValue, iNo);

    if (iRet == ERRARRAY)
    {
        printf("ERROR : INVALID MEMORY ADDRESS\n");
    }
    else if (iRet == ERRSIZE)
    {
        printf("ERROR : INVALID SIZE\n");
    }
    else if (iRet == -1)
    {
        printf("There is no such element \n");
    }
    else
    {
        printf("First Occurance of %d is : %d ", iNo, iRet);
    }

    free(ptr);

    return 0;
}