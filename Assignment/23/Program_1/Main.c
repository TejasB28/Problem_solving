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
    BOOL bRet = FALSE;

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

    bRet = Check(ptr, iValue, iNo);

    if (bRet == ERRARRAY)
    {
        printf("ERROR : INVALID MEMORY ADDRESS\n");
    }
    else if (bRet == ERRSIZE)
    {
        printf("ERRRO : INVALID SIZE\n");
    }
    else if (bRet == TRUE)
    {
        printf("%d is present", iNo);
    }
    else
    {
        printf("%d is absent", iNo);
    }

    free(ptr);

    return 0;
}