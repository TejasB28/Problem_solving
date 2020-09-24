////////////////////////////////////////////////////////
//
//Function Name : Pattern
//Input : Integer
//Output : none
//Description : It is used to print pattern(A A A A A
//                                          B B B B B
//                                          C C C C C).
//Author : Tejas A. Bora
//date : 12 Aug 2020
//
//////////////////////////////////////////////////////////

#include "Header.h"

void Pattern(int iRows, int iCols)
{
    int i = 0, j = 0;
    for (i = 1; i <= iRows; i++)
    {
        for (j = 1; j <= iCols; j++)
        {
            printf("%c\t", 64 + i);
        }
        printf("\n");
    }
}