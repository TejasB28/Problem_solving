/*
Write a recursive program which display below pattern.
Input : 6
Output : a b c d e f
*/

#include <stdio.h>

void Display(int iValue)
{
    static int iNo = 0;
    if (iValue > iNo)
    {
        printf("%c\t", 'a' + iNo);
        iNo++;
        Display(iValue);
    }
}

int main()
{
    int iNo = 0;
    printf("Enter the Number :\n");
    scanf("%d", &iNo);

    Display(iNo);

    return 0;
}