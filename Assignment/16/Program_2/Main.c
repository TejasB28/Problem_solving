/*
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 4
Output : 2 4 6 8 10
         1 3 5 7 9
         2 4 6 8 10
         1 3 5 7 9
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