///////////////////////////////////////////////////////
//
//Function Name : Reverse
//Input : First Pointer
//Output : void
//Description : It is used to reverse each element of singly linked list.
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

void Reverse(PNODE Head)
{
    int iRev = 0;
    while (Head != NULL)
    {
        int iNo = Head->data;
        iRev = 0;
        while (iNo != 0)
        {
            iRev = iRev * 10 + (iNo % 10);
            iNo = iNo / 10;
        }
        Head->data = iRev;
        Head = Head->next;
    }
}