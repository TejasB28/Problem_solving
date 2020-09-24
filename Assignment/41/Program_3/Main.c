/*
Write a program which display product of all digits of all element from
singly linear linked list. (Don’t consider 0)
Function Prototype :
void DisplayProduct( PNODE Head);
Input linked list : |11|->|20|->|32|->|41|
Output : 1 2 6 4
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

    DisplayProduct(First);

    return 0;
}