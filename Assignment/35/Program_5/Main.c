/*
Write a program which accept one number from user and range of
positions from user. Toggle all bits from that range.
Input : 897 9 13
Toggle all bits from position 9 to 13 of input number ie 879.
*/

#include "Header.h"

int main()
{
    UINT iValue = 0, iRet = 0;
    int iStart = 0, iEnd = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    printf("Starting range :\n");
    scanf("%d", &iStart);

    printf("Ending Range :\n");
    scanf("%d", &iEnd);

    iRet = ToggleBitRange(iValue, iStart, iEnd);

    printf("Modified value after toggle : %d", iRet);
}