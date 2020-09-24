/*
Write a recursive program which accept string from user and count number
of characters.
Input : Hello
Output : 5
*/

#include <stdio.h>

int Strlen(char *str)
{
    static int iCnt = 0;
    if (*str != '\0')
    {
        iCnt++;
        str++;
        Strlen(str);
    }
    return iCnt;
}

int main()
{
    char Str[50];
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']", Str);

    iRet = Strlen(Str);

    printf("Number of characters : %d\n", iRet);

    return 0;
}