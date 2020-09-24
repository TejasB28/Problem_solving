/*
Write a program which accept string from user count number of
words from string
Input : “Marvellous Multi OS”
Output : 3
Input : “      Marvellous     Multi   OS   Pune”
Output : 4
*/

#include "Header.h"

int main()
{
    char cStr[50];
    int iRet = 0;

    printf("Enter the String :\n");
    scanf("%[^'\n']s", cStr);

    iRet = WordCount(cStr);

    printf("Number of words in String : %d", iRet);

    return 0;
}