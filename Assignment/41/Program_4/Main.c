/*
Write a program which display smallest digits of all element from singly
linear linked list.
Function Prototype :
void DisplaySmall( PNODE Head);
Input linked list : |11|->|250|->|532|->|415|
Output : 1 0 2 1
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

    DisplaySmall(First);

    return 0;
}