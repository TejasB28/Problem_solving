/*
Write a program which display all palindrome elements of singly linked
list.
Function Prototype :
void DisplayPallindrome( PNODE Head);
Input linked list : |11|->|28|->|17|->|414|->|6|->|89|
Output : 11 6 414
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

    DisplayPallindrome(First);

    return 0;
}