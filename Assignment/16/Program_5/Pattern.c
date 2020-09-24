////////////////////////////////////////////////////////
//
//Function Name : Pattern
//Input : Integer
//Output : none
//Description : It is used to print pattern(1   2   3   4
//                                          2   3   4   5
//                                          3   4   5   6
//                                          4   5   6   7 ).
//Author : Tejas A. Bora
//date : 12 Aug 2020
//
//////////////////////////////////////////////////////////

#include "Header.h"

void Pattern(int iRows, int iCols)
{
    int i = 0, j = 0;
    for (i = 0; i < iRows; i++)
    {
        for (j = 1; j <= iCols; j++)
        {
            printf("%d\t", j + i);
        }
        printf("\n");
    }
}