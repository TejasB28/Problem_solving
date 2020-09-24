/////////////////////////////////////////////////////
//
//Function Name : Display
//Input : Character
//Output : none
//Description : It is used to print Decimal,octal,hexedecimal of character.
//Author : Tejas A. Bora
//Date : 22 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

void Display(char ch)
{
    int iValue = ch;
    printf("Decimal :  %d\n", iValue);
    printf("Octal :  %o\n", iValue);
    printf("HexaDecimal :  %X\n", iValue);
}
