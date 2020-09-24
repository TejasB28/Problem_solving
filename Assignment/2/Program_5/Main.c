/*
Problem Statement :Accept Number from user and check number is even or odd.
*/
#include "Header.h"

int main()
{
    int iNum = 0;
    BOOL bAns = FALSE;
    printf("Enter the Number :\n");
    scanf("%d", &iNum);

    bAns = ChkEven(iNum);
    if (bAns == TRUE)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }

    return 0;
}