/*
Problem Statement :
Accept N numbers from user and return difference between summation
of even elements and summation of odd elements.

Input : N : 6
Elements : 85 66 3 80 93 88
Output : 53 (234 - 181)
*/

#include "Header.h"

int main()
{
    int iValue = 0;
    int iCnt = 0;
    int iDiff = 0;

    int *ptr = NULL;

    printf("Enter the value of N :\n");
    scanf("%d", &iValue);

    ptr = (int *)malloc(sizeof(int) * iValue);

    if (ptr == NULL)
    {
        printf("ERROR : Unable to Alloacte Memory\n");
        return -1;
    }

    printf("Enter the Numbers:\n");

    for (iCnt = 0; iCnt < iValue; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iDiff = Difference(ptr, iValue);

    printf("Difference is :%d", iDiff);

    free(ptr);
    return 0;
}