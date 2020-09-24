/////////////////////////////////////////////////////
//
//Function Name : DisBill
//Input : Integer
//Output : Float
//Description : It is used to calculate bill amount with discount.
//Author : Tejas A. Bora
//Date : 19 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

float DisBill(int iBill)
{
    if (iBill <= 500 && iBill > 0)
    {
        return (float)iBill;
    }
    else if (iBill <= 1500 && iBill > 500)
    {
        return (float)iBill - (iBill / 10);
    }
    else if (iBill > 1500)
    {
        return (float)iBill - (iBill / 15);
    }
    else
    {
        return INVALID;
    }
}
