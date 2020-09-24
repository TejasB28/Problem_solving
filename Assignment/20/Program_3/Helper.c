/////////////////////////////////////////////////////
//
//Function Name : SchoolFees
//Input : Integer
//Output : Integer
//Description : It is used to return fees.
//Author : Tejas A. Bora
//Date : 19 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

int SchoolFees(int iStd)
{
    int iFees = 0;
    switch (iStd)
    {
    case 1:
        iFees = 8900;
        break;
    case 2:
        iFees = 12790;
        break;
    case 3:
        iFees = 21000;
        break;
    case 4:
        iFees = 23450;
        break;
    default:
        return INVALID;
        break;
    }
    return iFees;
}