////////////////////////////////////////////////////
//
//Function Name : ChkVowel
//Input : Character
//Output : boolean
//Description : It is used to check string contain vowel or not..
//Author : Tejas A. Bora
//Date : 24 Aug 2020
//
/////////////////////////////////////////////////////
#include "Header.h"

BOOL ChkVowel(char *str)
{
    int iCnt = 0, iNo = 0;

    while (str[iCnt] != '\0')
    {
        if (str[iCnt] == 'a' || str[iCnt] == 'e' || str[iCnt] == 'i' || str[iCnt] == 'o' || str[iCnt] == 'u' || str[iCnt] == 'A' || str[iCnt] == 'E' || str[iCnt] == 'I' || str[iCnt] == 'O' || str[iCnt] == 'U')
        {
            iNo = 1;
            break;
        }
        iCnt++;
    }
    if (iNo == 1)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}