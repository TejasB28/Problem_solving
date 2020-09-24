//////////////////////////////////////////////////
////
//Function Name : DollarToINR
//Input : integer
//Output : integer
//Description : It is used to convert dollar into INR.
//Author : Tejas A. Bora
//Date : 8 Aug 2020
////
///////////////////////////////////////////////////

#include "Header.h"

int DollarToINR(int iNo)
{
    if (iNo < 0)
    {
        return -1;
    }
    return iNo * 70;
}