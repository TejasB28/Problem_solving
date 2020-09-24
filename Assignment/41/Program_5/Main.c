/*
Write a program which display largest digits of all element from singly
linear linked list.
Function Prototype :void DisplayLarge( PNODE Head);
Input linked list : |11|->|250|->|532|->|419|
Output : 1 5 5 9
*/

#include "Header.h"

int main()
{
    PNODE First = NULL;
    int iCnt = 0, iSize = 0, iValue = 0;

    printf("How many nodes you want to add :\n");
    scanf("%d", &iSize);

    for (iCnt = 1; iCnt <= iSize; iCnt++)
    {
        printf("Enter the Number :\n");
        scanf("%d", &iValue);
        InsertFirst(&First, iValue);
    }

    Display(First);

    DisplayLarge(First);

    return 0;
}