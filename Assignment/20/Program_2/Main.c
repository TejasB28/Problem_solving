/*
Problem Statement :
Design application for income tax department to calculate tax
amount. According to the income tax department there is no
income tax for the income less than 5 lakhs.
If income is in between 5 to 10 lakhs then there will be 10% tax.
If income is in between 10 to 20 lakhs then there will be 20%
tax.
And for more than 20 lakhs there will be 30% tax.
We have to accept gross income from user and return the tax
amount.

Input : 600000 Output : 10000 (0 + 10000)
Input : 450000 Output : 0
Input : 1200000 Output : 90000 (0 + 50000 + 40000)
*/

#include "Header.h"

int main()
{
    int iAmt = 0;
    float fTax = 0.0;

    printf("Enter the Amount :\n");
    scanf("%d", &iAmt);

    fTax = IncomeTax(iAmt);

    if (fTax == INVALID)
    {
        printf("ERROR : INVALID AMOUNT\n");
    }
    else
    {
        printf("Income Tax is :%f", fTax);
    }

    return 0;
}