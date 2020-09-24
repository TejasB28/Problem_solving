////////////////////////////////////////////////////
//
//Function Name : StrWrdRev
//Input : char *
//Output : none
//Description : It is used reverse word at place.
//Author : Tejas A. Bora
//Date : 5 Sep 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

void StrWrdRev(char *cStr)
{
    if (cStr == NULL)
    {
        return;
    }

    char temp = '\0';
    int iPos = 0, iStart = 0, iEnd = 0, iLength = 0;

    while (*cStr != '\0')
    {
        iLength++;
        cStr++;
    }
    iLength--;

    while (iEnd < iLength)
    {
        if ((iEnd == iLength - 1) || (!isalnum(cStr[iEnd])))
        {
            if (iEnd < iLength - 1)
            {
                iPos = iEnd - 1;
            }
            else
            {
                iPos = iEnd;
            }
            while (iStart < iPos)
            {
                temp = cStr[iStart];
                cStr[iStart] = cStr[iPos];
                cStr[iPos] = temp;
                iStart++;
                iPos--;
            }
            iStart = iEnd + 1;
        }
        iEnd++;
    }
}

// void StrWrdRevX(char *cStr)
// {
//     int iLength = 0, i = 0, j = 0, k = 0;
//     char temp = '\0';
//     while (*cStr != '\0')
//     {
//         iLength++;
//         cStr++;
//     }

//     for (i = 0, j = 0; j < iLength; j++)
//     {
//         if ((j == iLength - 1) || cStr[j] == ' ')
//         {
//             if (j < iLength - 1)
//             {
//                 k = j - 1;
//             }
//             else
//             {
//                 k = j;
//             }
//             while (i < k)
//             {
//                 temp = cStr[i];
//                 cStr[i] = cStr[k];
//                 cStr[k] = temp;

//                 i++;
//                 k--;
//             }
//             i = j + 1;
//         }
//     }
// }