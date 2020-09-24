/*
Write a recursive program which accept number from user and return
largest digit
Input : 87983
Output : 9
*/
#include <stdio.h>

int Max(int iValue)
{
    static int iMax = 0;
    int iNo = 0;
    if (iValue != 0)
    {
        iNo = iValue % 10;
        if (iNo > iMax)
        {
            iMax = iNo;
        }
        iValue = iValue / 10;
        Max(iValue);
    }
    return iMax;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d", &iNo);

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    iRet = Max(iNo);

    printf("Maximum Digit is  : %d", iRet);

    return 0;
}