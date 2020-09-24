////////////////////////////////////////////////////////////
//
//Function Name : FhtoCs
//Input : float
//Output : double
//Description : It is used to convert temperature to fahrenheit to celsius.
//Author : Tejas A. Bora
//Date : 8 Aug 2020
//
//////////////////////////////////////////////////////////////

#include "Header.h"

double FhtoCs(float fTemp)
{
    double dCel = 0.0;

    dCel = ((fTemp - 32) * 5 / 9);

    return dCel;
}