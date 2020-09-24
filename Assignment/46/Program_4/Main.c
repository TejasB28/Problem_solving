/*
Write a recursive program which accept number from user and return its
factorial.
Input : 5
Output : 120
*/

#include <stdio.h>

int Fact(int iNo)
{
    static int iFact = 1;
    if (iNo > 1)
    {
        iFact *= iNo;
        iNo--;
        Fact(iNo);
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d", &iValue);

    iRet = Fact(iValue);
    printf("factorial of %d => %d\n", iValue, iRet);

    return 0;
}