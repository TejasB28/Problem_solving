/*
Problam Statement : Write a program which accept total marks & obtained marks from user and
                    calculate percentage.
        Input : 1000 745
        Output : 74.5%
*/

#include "Header.h"

int main()
{
    int iTotal = 0, iObtain = 0;
    float fRet = 0.0;

    printf("Enter the total marks :\n");
    scanf("%d", &iTotal);

    printf("Enter the obtained Marks :\n");
    scanf("%d", &iObtain);

    fRet = Percentage(iTotal, iObtain);
    if (fRet == -1)
    {
        printf("ERROR :Invalid Input!");
    }
    else
    {
        printf("Percentage :%f %", fRet);
    }

    return 0;
}
