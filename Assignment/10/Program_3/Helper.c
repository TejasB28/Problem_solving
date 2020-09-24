//////////////////////////////////////////////////////////
//
//Function Name : KMtoMeter
//Input : int
//Output : int
//Description : It is used to convert km to meter
//Author : Tejas A. Bora
//Date : 8 Aug 2020
//
///////////////////////////////////////////////////////////

#include "Header.h"

int KMtoMeter(int iKm)
{
    int iMeter = 0;
    if (iKm < 0)
    {
        iKm = -iKm;
    }
    iMeter = iKm * 1000;
    return iMeter;
}