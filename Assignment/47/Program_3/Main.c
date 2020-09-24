/*
Write a recursive program which accept string from user and count number
of small characters.
Input : HElloWOrlD
Output : 5
*/

#include <stdio.h>

int Small(char *str)
{
    static int iCnt = 0;
    if (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
        Small(str);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char cStr[50];

    printf("Enter String :\n");
    scanf("%[^'\n']", cStr);

    iRet = Small(cStr);
    printf("Number of Small Chracters :%d", iRet);

    return 0;
}