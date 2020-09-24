/*
Write a program which accept one number and position from user and
toggle that bit. Return modified number.
Input : 10 3
Output : 14
*/

#include "Header.h"

int main()
{
    UINT uValue = 0, uRet = 0;
    int iPos = 0;

    printf("Enter the Number :\n");
    scanf("%d", &uValue);

    printf("Enter the Position :\n");
    scanf("%d", &iPos);

    uRet = ToggleBit(uValue, iPos);

    if (uRet == -1)
    {
        printf("Invalid position \n");
    }
    else
    {
        printf("Modified Number is : %d", uRet);
    }

    return 0;
}