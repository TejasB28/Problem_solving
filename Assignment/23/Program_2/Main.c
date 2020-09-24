/*
Problem Statement :
Accept N numbers from user and accept one another number as NO ,
return index of first occurrence of that NO.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 1
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : -1
*/

/*
Accept N numbers from user and accept one another number as NO ,
check whether NO is present or not.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : TRUE
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : FALSE
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

    iRet = FirstOcc(ptr, iValue, iNo);

    if (iRet == ERRARRAY)
    {
        printf("ERROR : INVALID MEMORY ADDRESS\n");
    }
    else if (iRet == ERRSIZE)
    {
        printf("ERRRO : INVALID SIZE\n");
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