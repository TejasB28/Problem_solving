/*
Problem Statement :
Accept N numbers from user check whether that numbers contains 11 in
it or not.
Input : N : 6
Elements : 85 66 11 80 93 88
Output : 11 is present
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 11 is absent
*/

#include "Header.h"

int main()
{
    int iValue = 0;
    int *ptr = NULL;
    int iCnt = 0;
    BOOL bRet = FALSE;

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
        printf("ERROR : unbale to Allocate Memory\n");
        return -1;
    }

    printf("Enter %d Numbers \n", iValue);
    for (iCnt = 0; iCnt < iValue; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    bRet = Check(ptr, iValue);
    if (bRet == ERRARRAY)
    {
        printf("ERROR : Invalid memory address\n");
    }
    else if (bRet == ERRSIZE)
    {
        printf("ERROR : Invalid size\n");
    }
    else if (bRet == TRUE)
    {
        printf("11 is Present\n");
    }
    else
    {
        printf("11 is Absent\n");
    }

    return 0;
}