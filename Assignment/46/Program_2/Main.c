/*
Write a recursive program which accept number from user and return
summation of its digits.
Input : 879
Output : 24
*/

#include <stdio.h>

int Sum(int iValue)
{
    static int iSum = 0;
    if (iValue != 0)
    {
        iSum += (iValue % 10);
        iValue = iValue / 10;
        Sum(iValue);
    }
    return iSum;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d", &iNo);

    iRet = Sum(iNo);

    printf("Summation of %d is => %d ", iNo, iRet);

    return 0;
}