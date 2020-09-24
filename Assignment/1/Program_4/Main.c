/*
Problem Statement : Accept One number and check whether it is divisible by 5 or not
*/
#include "Header.h"
int main()
{
    int iNum = 0;
    BOOL bRes = FALSE;
    printf("Enter the Number :\n");
    scanf("%d", &iNum);
    bRes = Check(iNum);
    if (bRes == TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("not divisible by 5\n");
    }

    return 0;
}