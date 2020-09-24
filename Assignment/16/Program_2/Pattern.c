////////////////////////////////////////////////////////
//
//Function Name : Pattern
//Input : Integer
//Output : none
//Description : It is used to print pattern(2 4 6 8 10
//                                          1 3 5 7 9
//                                          2 4 6 8 10
//                                          1 3 5 7 9).
//Author : Tejas A. Bora
//date : 12 Aug 2020
//
//////////////////////////////////////////////////////////

#include "Header.h"

void Pattern(int iRows, int iCols)
{
    int i = 0, j = 0, iOdd = 0;
    for (i = 1; i <= iRows; i++)
    {
        iOdd = 1;
        for (j = 1; j <= iCols; j++)
        {
            if (i % 2 != 0)
            {
                printf("%d\t", j * 2);
            }
            else
            {
                printf("%d\t", iOdd);
                iOdd = iOdd + 2;
            }
        }
        printf("\n");
    }
}
