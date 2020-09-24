/*
Problem Statement :
Design application for school management system.
As school is primary there are 4 standards from 1 to 4.
School fees of each standard is different.
For first standard fees are 8900, for second standard 12790, for
third standard 21000 and for fourth standard fees are 23450.
We have to accept standard from user and display the
corresponding fees.

Input : 2 Output : 12790
Input : 4 Output : 23450
Input : 6 Output : Wrong input
*/

#include "Header.h"

int main()
{
    int iStd = 0;
    int iFees = 0;

    printf("Enter the Standard:\n");
    scanf("%d", &iStd);

    iFees = SchoolFees(iStd);
    if (iFees == INVALID)
    {
        printf("ERROR : INVALID STANDARD\n");
    }
    else
    {
        printf("Fees  :%d", iFees);
    }

    return 0;
}