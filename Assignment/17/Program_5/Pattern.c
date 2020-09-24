////////////////////////////////////////////////////////
//
//Function Name : Pattern
//Input : Integer
//Output : none
//Description : It is used to print pattern(1 2 3 4
//                                          1 * * 4
//                                          1 * * 4
//                                          1 2 3 4).
//Author : Tejas A. Bora
//date : 14 Aug 2020
//
//////////////////////////////////////////////////////////

#include "Header.h"

void Pattern(int iRows, int iCols)
{
    int i = 0, j = 0;
    if (iRows < 0)
    {
        iRows = -iRows;
    }
    if (iCols < 0)
    {
        iCols = -iCols;
    }
    for (i = 1; i <= iRows; i++)
    {
        for (j = 1; j <= iCols; j++)
        {
            if (i == 1 || j == 1 || i == iRows || j == iCols)
            {
                printf("%d\t", j);
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}