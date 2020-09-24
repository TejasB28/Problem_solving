/*
Write a program which accept one number from user and toggle 7th and
10th bit of that number. Return modified number.
Input : 137
Output : 713
*/

#include "Header.h"

int main()
{
    UINT uValue = 0;
    UINT uRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &uValue);

    uRet = ToggleBit(uValue);

    printf("Modified Number is : %d\n", uRet);

    return 0;
}