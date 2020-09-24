/*
Write a program which search last occurrence of particular element from
singly linear linked list.
Function should return position at which element is found.
Function Prototype :int SearchLastOcc( PNODE Head, int no );
Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input element : 30
Output : 6
*/

#include "Header.h"

int main()
{
    PNODE First = NULL;
    int iNo = 0, iRet = 0;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    printf("Enter number that you want to search :\n");
    scanf("%d", &iNo);

    iRet = SearchLastOcc(First, iNo);

    printf("Last Occurance of %d is : %d", iNo, iRet);

    return 0;
}