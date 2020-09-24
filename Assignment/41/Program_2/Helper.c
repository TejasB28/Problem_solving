///////////////////////////////////////////////////////
//
//Function Name : DisplayPallindrome
//Input : First Pointer
//Output : void
//Description : It is used to display palindrome number from linked list.
//Author : tejas A. Bora
//Date : 10 sep 2020
//
////////////////////////////////////////////////////////

#include "Header.h"

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    while (Head != NULL)
    {
        printf("|%d|->", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

void DisplayPallindrome(PNODE Head)
{
    int iRev = 0;
    printf("Palindrome Numbers are : ");
    while (Head != NULL)
    {
        int iNo = Head->data;
        iRev = 0;
        while (iNo != 0)
        {
            iRev = iRev * 10 + (iNo % 10);
            iNo = iNo / 10;
        }
        if (iRev == Head->data)
        {
            printf("%d,", Head->data);
        }
        Head = Head->next;
    }
}