/*
Accept number from user and display below pattern.
Input : 5
Output : A B C D E
*/

#include "Header.h"

int main()
{
    int iValue = 0;
    printf("Enter the Number:\n");
    scanf("%d", &iValue);

    Pattern(iValue);
    return 0;
}