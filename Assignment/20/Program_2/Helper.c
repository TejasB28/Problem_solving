/////////////////////////////////////////////////////
//
//Function Name : IncomeTax
//Input : Integer
//Output : Float
//Description : It is used to calculate Income tax..
//Author : Tejas A. Bora
//Date : 19 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

float IncomeTax(int iAmt)
{
    if (iAmt <= 500000 && iAmt > 0)
    {
        return 0;
    }
    else if (iAmt > 500000 && iAmt <= 1000000)
    {
        iAmt = iAmt - 500000;
        return (float)(iAmt / 100) * 10;
    }
    else if (iAmt > 1000000 && iAmt <= 2000000)
    {
        iAmt = iAmt - 1000000;
        return (float)50000 + ((iAmt / 100) * 20);
    }
    else if (iAmt > 2000000)
    {
        iAmt = iAmt - 2000000;
        return (float)250000 + ((iAmt / 100) * 30);
    }
    else
    {
        return INVALID;
    }
}