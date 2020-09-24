/*
Problem Statement : Write a program which accept one Number from user and check whether that number is 
                    greater than 100 or not.

    Input :  101
    Output : Greater
    Input :  39
    Output : Smaller 
*/
#include "Header.h"

int main()
{
    int iNo = 0;
    BOOL bRet = FALSE;
    printf("Enter Number :\n");
    scanf("%d", &iNo);

    bRet = ChkGreater(iNo);
    if (bRet == TRUE)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }

    return 0;
}