/////////////////////////////////////////////////////
//
//Function Name : StrRevX
//Input : Character *
//Output : None
//Description : It is used to reverse the string.
//Author : Tejas A. Bora
//Date : 26 Aug 2020
//
//////////////////////////////////////////////////////

#include "Header.h"

/*
////////////////////////////////////////
//Time Complexity : O(2N)
///////////////////////////////////////////
void StrRevX(char *cStr)
{
    int iLength = 0, iCnt = 0;

    while (cStr[iCnt] != '\0')
    {
        iLength++;
        iCnt++;
    }
    iCnt--;

    while (iCnt != -1)
    {
        printf("%c", cStr[iCnt]);
        iCnt--;
    }
}
*/

/////////////////////////////////////////////
//Time Complexity:      -------------------------|
/////////////////////////////////////////////    v
void StrrevXX(char *arr)
{
    int iStart = 0, iEnd = 0;
    char temp = '\0';

    while (arr[iEnd] != '\0') // 0(N)
    {
        iEnd++;
    }

    iEnd--;

    while (iStart < iEnd) //O(N/2)
    {
        temp = arr[iStart];
        arr[iStart] = arr[iEnd];
        arr[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}
