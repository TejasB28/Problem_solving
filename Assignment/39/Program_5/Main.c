/*
Write a program which return smallest element from singly linear linked
list.
Function Prototype :int Minimum( PNODE Head);
Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 20
*/

#include "Header.h"

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 640);
    InsertFirst(&First, 20);
    InsertFirst(&First, 240);
    InsertFirst(&First, 110);
    InsertFirst(&First, 230);

    iRet = Minimum(First);

    printf("Minimum element of Linked List elements is : %d", iRet);

    return 0;
}