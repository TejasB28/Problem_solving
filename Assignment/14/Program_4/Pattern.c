////////////////////////////////////////////////////////
//
//Function Name : Pattern
//Input : Integer
//Output : none
//Description : It is used to print pattern(* # * #
//                                          * # * #
//                                          * # * #).
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
            if (j % 2 != 0)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf("\n");
    }
}