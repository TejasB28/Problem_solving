/*
Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 6 iCol = 5
Output : * * * * *
         * @ @ @ *
         * @ @ @ *
         * @ @ @ *
         * @ @ @ *
         * * * * *
*/

#include "Header.h"

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows :\n");
    scanf("%d", &iValue1);
    printf("Enter number of columns :\n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}