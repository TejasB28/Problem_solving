/*
Write a recursive program which accept number from user and return its
product of digits.
Input : 523
Output : 30
*/

#include <stdio.h>

int Mult(int iNo)
{
    if (iNo == 0)
    {
        return 0;
    }
    static int iMult = 1;
    int iRev = 0;
    if (iNo != 0)
    {
        iRev = iNo % 10;
        if (iRev == 0)
        {
            iRev = 1;
        }
        iMult *= iRev;
        iNo = iNo / 10;
        Mult(iNo);
    }
    return iMult;
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

    iRet = Mult(iNo);
    printf("Multiplication of Digits is %d", iRet);

    return 0;
}