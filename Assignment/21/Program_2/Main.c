/*
Problem Statement :
Accept N numbers from user and display all such elements which are
divisible by 5.

Input : N : 6
Elements : 85 66 3 80 93 88
Output : 85 80
*/

#include "Header.h"

int main()
{
    int iValue = 0;
    int iCnt = 0;

    int *ptr = NULL;

    printf("Enter the Value of N\n");
    scanf("%d", &iValue);

    ptr = (int *)malloc(sizeof(int) * iValue);
    if (ptr == NULL)
    {
        printf("ERROR : Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the Values :\n");
    for (iCnt = 0; iCnt < iValue; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    Display(ptr, iValue);

    free(ptr);
    return 0;
}