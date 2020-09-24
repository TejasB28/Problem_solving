/*
Write a recursive program which accept string from user and count white
spaces.
Input : HE llo WOr lD
Output : 3
*/

#include <stdio.h>

int WhiteSpace(char *str)
{
    static int iCnt = 0;
    if (*str != '\0')
    {
        if (*str == ' ')
        {
            iCnt++;
        }
        str++;
        WhiteSpace(str);
    }
    return iCnt;
}

int main()
{
    char cStr[50];
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']", cStr);

    iRet = WhiteSpace(cStr);

    printf("Number of Whitespaces in String : %d", iRet);

    return 0;
}