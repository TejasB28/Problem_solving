/////////////////////////////////////////////////////
//
//Function Name : TouristBill
//Input : Integer
//Output : Integer
//Description : It is used to calculate rent of car.
//Author : Tejas A. Bora
//Date : 19 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

int TouristBill(int iKm)
{
    if (iKm <= 100 && iKm > 0)
    {
        return iKm * 25;
    }
    else if (iKm > 100)
    {
        iKm = iKm - 100;
        return 2500 + (iKm * 15);
    }
    else
    {
        return INVALID;
    }
}