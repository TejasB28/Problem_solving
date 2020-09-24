/*
Problem Statement : Write a program which accept two numbers and check whether number is equal or not.
Input : 10 10
Output : Equal
Input : 10 12
Output : Not Equal
Input : 10 -10
Output : Not Equal
*/

#include "Header.h"

int main()
{
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;
    printf("Enter the two numbers :\n");
    scanf("%d%d", &iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if (bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    return 0;
}
