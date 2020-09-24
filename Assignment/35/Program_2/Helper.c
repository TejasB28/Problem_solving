////////////////////////////////////////////////////
//
//Function Name : CommonBits
//Input : unsigned int,unsigned int
//Output : none
//Description : It is used to display common ON position of two numbers.
//Author : Tejas A. Bora
//Date : 5 Sep 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

void CommonBits(UINT iNo1, UINT iNo2)
{
    int iMask = 0X00000001;
    int iResult1 = 0, iResult2 = 0, iPos = 1, iChk = 0;

    while (iMask != 0X80000000)
    {
        iResult1 = iNo1 & iMask;
        iResult2 = iNo2 & iMask;

        if ((iResult1 == iMask) && (iResult2 == iMask))
        {
            iChk = 1;
            printf("%d ", iPos);
        }

        iMask = iMask << 1;
        iPos++;
    }
    if (iChk == 0)
    {
        printf("No Common ON bits occurs \n");
    }
    else
    {
        printf("are the position where common Bits Occurs \n");
    }
}