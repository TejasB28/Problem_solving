//////////////////////////////////////////////////
//
//Function Name : Pattern
//Input : Integer,Integer
//Output : None.
//Description : It used to print pattern.
//Pattern : * * * *
//          * * *
//          * *
//          *
//Author : Tejas A. Bora
//Date : 14 Aug 2020
//
///////////////////////////////////////////////////

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
    if (iRows != iCols)
    {
        printf("ERROR : INVALID PARAMETERS");
        return;
    }
    for (i = 1; i <= iRows; i++)
    {
        for (j = iCols; j >= 1; j--)
        {
            if (i <= j)
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}