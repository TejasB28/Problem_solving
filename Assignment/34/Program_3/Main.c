/*
Write a program which accept one number and position from user and on
that bit. Return modified number.
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

    uRet = OnBit(uValue, iPos);

    if (uRet == -1)
    {
        printf("Invalid Position \n");
    }
    else if (uRet == -2)
    {
        printf("Bit is Already ON\n");
    }
    else
    {
        printf("Modified Number is : %d", uRet);
    }

    return 0;
}
