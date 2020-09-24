//////////////////////////////////////////////////
//
//Function Name : PrintEven
//Parameters :  Integer
//Return value : None
//Description : It is used to print even number upto users input.
//Author : Tejas A. Bora
//Date : 2 Aug 2020
//
//////////////////////////////////////////////////

#include "Header.h"

void PrintEven(int iValue)
{
    int iCnt = 0;
    if (iValue <= 0)
    {
        printf("ERROR : Invalid Input\n");
    }

    for (iCnt = 1; iCnt <= iValue * 2; iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}
////////////////////////////////////////////////////////
//Time Complexity : O(N*2)
//where N is number accepted from user.
////////////////////////////////////////////////////////