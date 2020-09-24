/*
Write a recursive program which accept number from user and return
smallest digit
Input : 87983
Output : 3
*/

#include <stdio.h>

int Min(int iValue)
{
    static int iMin = 9;
    int iNo = 0;
    if (iValue != 0)
    {
        iNo = iValue % 10;
        if (iMin > iNo)
        {
            iMin = iNo;
        }
        iValue = iValue / 10;
        Min(iValue);
    }

    return iMin;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iNo);

    iRet = Min(iNo);
    printf("Minimum Digit is : %d", iRet);

    return 0;
}