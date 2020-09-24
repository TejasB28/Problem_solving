/*
Write a recursive program which display below pattern.
Input : 5
Output : 1 2 3 4 5
*/

#include <stdio.h>

void Display(int iNo)
{
    static int iValue = 1;
    if (iValue <= iNo)
    {
        printf("%d\t", iValue);
        iValue++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}