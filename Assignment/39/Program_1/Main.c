/*
Write a program which search first occurrence of particular element from
singly linear linked list.
Function should return position at which element is found.

Function Prototype :int SearchFirstOcc( PNODE Head , int no );
Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input element : 30
Output : 3
*/

#include "Header.h"

int main()
{
    PNODE First = NULL;
    int iValue = 0, iRet = 0;

    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    printf("Enter the Number that you want to search :\n");
    scanf("%d", &iValue);

    iRet = SearchFirstOcc(First, iValue);

    printf("First Occurance of %d is : %d ", iValue, iRet);

    return 0;
}