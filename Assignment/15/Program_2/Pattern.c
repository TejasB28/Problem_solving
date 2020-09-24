////////////////////////////////////////////////////////
//
//Function Name : Pattern
//Input : Integer
//Output : none
//Description : It is used to print pattern(A B C D
//                                          a b c d
//                                          A B C D
//                                          a b c d).
//Author : Tejas A. Bora
//date : 12 Aug 2020
//
//////////////////////////////////////////////////////////

#include "Header.h"

void Pattern(int iRows, int iCols)
{
    int i = 0, j = 0;
    int iChar = 0;
    for (i = 1; i <= iRows; i++)
    {
        if (i % 2 == 0)
        {
            iChar = 96;
        }
        else
        {
            iChar = 64;
        }
        for (j = 1; j <= iCols; j++)
        {
            printf("%c\t", iChar + j);
        }
        printf("\n");
    }
}