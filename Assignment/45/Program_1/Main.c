#include <stdio.h>

void Display(int iValue)
{
    if (iValue > 0)
    {
        printf("*\t");
        iValue--;
        Display(iValue);
    }
}

int main()
{
    int iNo = 0;

    printf("Enter Number :\n");
    scanf("%d", &iNo);

    Display(iNo);

    return 0;
}