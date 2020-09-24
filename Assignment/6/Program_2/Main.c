/*
Problem Statement :
Write a program which accept number from user and check whether it contains 0
in it or not.
Input : 2395
Output : There is no Zero
Input : 1018
Output : It Contains Zero
Input : 9000
Output : It Contains Zero
Input : 10687
Output : It Contains Zero
*/
#include "Header.h"

int main()
{
    int iNo = 0;
    BOOL bRet = FALSE;
    printf("Enter the Number :\n");
    scanf("%d", &iNo);

    bRet = ChkZero(iNo);
    if (bRet == TRUE)
    {
        printf("It contains zero\n");
    }
    else
    {
        printf("There is no zero\n");
    }
    return 0;
}