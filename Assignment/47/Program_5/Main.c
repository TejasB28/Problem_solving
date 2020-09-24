/*
Write a recursive program which accept number from user and return its
reverse number.
Input : 523
Output : 325
*/

#include <stdio.h>

int Reverse(int iValue)
{
    static int iRev = 0;

    if (iValue < 0)
    {
        iValue = -iValue;
    }

    if (iValue != 0)
    {
        iRev = iRev * 10 + (iValue % 10);
        iValue = iValue / 10;
        Reverse(iValue);
    }
    return iRev;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d", &iNo);

    iRet = Reverse(iNo);
    printf("Reverse Number is : %d", iRet);

    return 0;
}