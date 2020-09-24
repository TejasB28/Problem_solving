////////////////////////////////////////////////////////////
//
//Function Name : Percentage
//Input : Integer,Integer
//Output : Float
//Description : it is used to calcaulate percentage of marks.
//Author :Tejas A. Bora
//Date: 4 Aug 2020
//
////////////////////////////////////////////////////////////
#include "Header.h"

float Percentage(int iTot, int iObt)
{
    float fAns = 0.0;
    if (iObt == 0)
    {
        return 0;
    }
    if (iTot == 0)
    {
        return -1;
    }
    fAns = ((float)iObt / (float)iTot) * 100;
    return fAns;
}