////////////////////////////////////////////////////////
//
// Function Name : Multiply
// Input : Integer,Integer,Integer
// Output : Integer
// Description  : It is used to multiply three numbers.
// Author : Tejas A. Bora
// Date : 4 Aug 2020
//
/////////////////////////////////////////////////////////
#include "Header.h"

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iAns = 0;
    if (iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        return 0;
    }
    if (iNo1 == 0)
    {
        iNo1 = 1;
    }
    if (iNo2 == 0)
    {
        iNo2 = 1;
    }
    if (iNo3 == 0)
    {
        iNo3 = 1;
    }

    iAns = iNo1 * iNo2 * iNo3;
    return iAns;
}