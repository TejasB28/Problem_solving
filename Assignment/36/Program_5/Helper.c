////////////////////////////////////////////////////
//
//Function Name : StrPallindrome
//Input : char *
//Output : boolean
//Description : It is used chk string is palindrome or not.
//Author : Tejas A. Bora
//Date : 5 Sep 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

BOOL StrPallindrome(char *cStr)
{
    if (cStr == NULL)
    {
        return FALSE;
    }

    char *Start = NULL, *End = NULL;
    Start = cStr;
    End = cStr;

    while (*End != '\0')
    {
        if ((*End >= 'A') && (*End <= 'Z'))
        {
            *End += 32;
        }
        End++;
    }
    End--;
    while (Start <= End)
    {
        if (*Start != *End)
        {
            break;
        }
        Start++;
        End--;
    }
    if (*Start == *End)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}