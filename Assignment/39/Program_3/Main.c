/*
Write a program which returns addition of all element from singly linear
linked list.
Function Prototype :int Addition( PNODE Head);
Input linked list : |10|->|20|->|30|->|40|
Output : 100
*/

#include "Header.h"

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    iRet = Addition(First);

    printf("Addition of Linked List elements is : %d", iRet);

    return 0;
}