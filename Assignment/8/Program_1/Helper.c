///////////////////////////////////////////////////////////////
//
//Function Name : Number
//Input : Integer
//Output : None.
//Description : It is used print the message on conditions.
//Author : Tejas A. Bora
//Date : 7 Aug 2020
//
////////////////////////////////////////////////////////////////

#include "Header.h"

void Number(int iNo)
{
    if (iNo < 50)
    {
        printf("Smaller");
    }
    else if (iNo >= 50 && iNo <= 100)
    {
        printf("Medium");
    }
    else if (iNo > 100)
    {
        printf("Larger");
    }
}