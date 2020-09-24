/*
Problem Statement :
Design application for hotel. According to the management
team of hotel they are giving discount on total bill amount of
customer.
If bill bill amount is less than 500 then there is no discount , if
bill amount is less than 1500 and more than 500 they give 10%
discount.
And if the bill amount is more than 1500 then they give 15%
discount.
Our application should accept total bill amount and depends on
the discount policy we have to return the amount after applying
discount.
Input : 1200 Output : 1080
Input : 290 Output : 290
Input : 3700 Output : 3145
*/

#include "Header.h"

int main()
{
    int iTBill = 0;
    float fDBill = 0.0;

    printf("Enter Total Bill Amount :\n");
    scanf("%d", &iTBill);

    fDBill = DisBill(iTBill);

    if (fDBill == INVALID)
    {
        printf("ERROR : Invalid Amount \n");
    }
    else
    {
        printf("Discounted Bill is %f", fDBill);
    }

    return 0;
}