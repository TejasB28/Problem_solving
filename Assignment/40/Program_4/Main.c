/*
Write a program which return second maximum element from singly linear
linked list.
Function Prototype :int SecMaximum( PNODE Head);
Input linked list : |110|->|230|->|320|->|240|
Output : 240
*/

#include "Header.h"

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 41);
    InsertFirst(&First, 52);
    InsertFirst(&First, 80);
    InsertFirst(&First, 11);

    iRet = SecMaximum(First);

    printf("Seacond Maximum element is : %d", iRet);

    return 0;
}