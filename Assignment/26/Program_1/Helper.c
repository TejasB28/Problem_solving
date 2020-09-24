/////////////////////////////////////////////////////
//
//Function Name : DisplayASCII
//Input : None
//Output : None
//Description : It is used to Display ASCII Table.
//Author : Tejas A. Bora
//Date : 22 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

void DisplayASCII()
{
    int iCnt = 0;
    printf("Symbol  |\t");
    printf("Decimal  |\t");
    printf("Octal  |\t");
    printf("HexaDecimal\n");
    printf("\n----------------------------------------------------------------------------------\n");
    for (iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%c   |\t\t", iCnt);
        printf("%d   |\t\t", iCnt);
        printf("%o   |\t\t", iCnt);
        printf("%x   |\n", iCnt);
    }
}