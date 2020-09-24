/*
Problem Statement :
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 3
Output : 
            * * *
            * * *
            * * *
            * * *
*/

#include "Header.h"

int main()
{
    int iRows = 0;
    int iCols = 0;
    printf("Enter the Number of rows :\n");
    scanf("%d", &iRows);
    printf("Enter the Number of columns:\n");
    scanf("%d", &iCols);

    Pattern(iRows, iCols);
    return 0;
}