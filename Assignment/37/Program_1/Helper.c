////////////////////////////////////////////////////
//
//Function Name : WordCount
//Input : char *
//Output : int
//Description : It is used to count the words in String.
//Author : Tejas A. Bora
//Date : 5 Sep 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

int WordCount(char *cStr)
{
    int iCnt = 1, iChk = 0;

    if (cStr == NULL)
    {
        return -1;
    }

    if (*cStr == ' ' && *(++cStr) == ' ')
    {
        iCnt = 0;
    }

    while (*cStr != '\0')
    {
        if ((*cStr == ' ') || (*cStr == '\n') || (*cStr == '\t'))
        {
            iChk = 1;
        }
        else if (iChk == 1)
        {
            iChk = 0;
            iCnt++;
        }
        cStr++;
    }
    return iCnt;
}