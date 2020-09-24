#include <stdio.h>

void Display(int iNo)
{
    static int iValue = 0;
    if (iValue < iNo)
    {
        printf("%c\t", 'A' + iValue);
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