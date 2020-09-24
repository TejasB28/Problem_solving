/*
Write a recursive program which accept number from user and display below
pattern.
Input : 5
Output : 5 * 4 * 3 * 2 * 1 *
*/

#include <stdio.h>

void Display(int iValue)
{
    if (iValue > 0)
    {
        printf("%d  *  ", iValue);
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