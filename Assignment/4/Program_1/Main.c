/*
Problem Statement :write a program which accept the number from user and display its multiplication of factors.
Input :12
Output : 144 (1*2*3*4*6)
Input :13
Output :1 (1)
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    int iMult = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iNo);

    iMult = MultFact(iNo);

    printf("Multiliaction of factors : %d", iMult);
}