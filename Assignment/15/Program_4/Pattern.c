////////////////////////////////////////////////////////
//
//Function Name : Pattern
//Input : Integer
//Output : none
//Description : It is used to print pattern(4 4 4 4 4
//                                          3 3 3 3 3
//                                          2 2 2 2 2
//                                          1 1 1 1 1).
//Author : Tejas A. Bora
//date : 12 Aug 2020
//
//////////////////////////////////////////////////////////

#include "Header.h"

void Pattern(int iRows, int iCols)
{
    int i = 0, j = 0;
    for (i = iRows; i >= 1; i--)
    {
        for (j = 1; j <= iCols; j++)
        {
            printf("%d\t", i);
        }
        printf("\n");
    }
}