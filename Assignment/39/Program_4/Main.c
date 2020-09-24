/*
Write a program which return largest element from singly linear linked
list.
Function Prototype :int Maximum( PNODE Head);
Input linked list : |110|->|230|->|320|->|240|
Output : 320
*/

#include "Header.h"

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 380);
    InsertFirst(&First, 110);

    iRet = Maximum(First);

    printf("Maximum element of Linked List elements is : %d", iRet);

    return 0;
}