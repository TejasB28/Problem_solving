///////////////////////////////////////////////////////
//
//Function Name : CircleArea
//Input : float
//Output : double
//Description : it is used to calculate area of circle
//Author : Tejas A.Bora
//Date : 8 Aug 2020
//
///////////////////////////////////////////////////////

#include "Header.h"

double CircleArea(float fRad)
{
    double dAns = 0.0;
    dAns = (double)(PI * fRad * fRad);
    return dAns;
}