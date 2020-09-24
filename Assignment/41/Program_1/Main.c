/*
Write a program which reverse each element of singly linked list.
Function Prototype :
void Reverse( PNODE Head);
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output :            |11|->|82|->|71|->|14|->|6|->|98|
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

    Reverse(First);
    Display(First);

    return 0;
}