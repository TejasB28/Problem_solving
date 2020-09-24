////////////////////////////////////////////////////
//
//Function Name : StrRevTogX
//Input : char *
//Output : boolean
//Description : It is used reverse and toggle the cases of string.
//Author : Tejas A. Bora
//Date : 5 Sep 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

void StrRevTogX(char *cStr)
{
    if (cStr == NULL)
    {
        return;
    }
    char cTemp = '\0';
    char *first = NULL, *last = NULL;
    first = cStr;
    last = cStr;

    while (*last != '\0')
    {
        if (*last >= 'A' && *last <= 'Z')
        {
            *last += 32;
        }
        else if (*last >= 'a' && *last <= 'z')
        {
            *last -= 32;
        }

        last++;
    }

    last--;

    while (first <= last)
    {
        cTemp = *first;
        *first = *last;
        *last = cTemp;

        first++;
        last--;
    }
}

/*
char temp = '\0';
int iStart = 0, iLast = 0;

while (cStr[iLast] != '\0')
{
    if (cStr[iLast] >= 'A' && cStr[iLast] <= 'Z')
    {
        cStr[iLast] += 32;
    }
    else if (cStr[iLast] >= 'a' && cStr[iLast] <= 'z')
    {
        cStr[iLast] -= 32;
    }
    iLast++;
}

iLast--;

while (iStart <= iLast)
{
    temp = cStr[iStart];
    cStr[iStart] = cStr[iLast];
    cStr[iLast] = temp;

    iStart++;
    iLast--;
}
*/