///////////////////////////////////////////////////////
//
//Function Name : DisplayLarge
//Input : First Pointer
//Output : void
//Description : It is used to display largest digit from each element of Linked list.
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

void DisplayLarge(PNODE Head)
{
    int iMax = 0;
    while (Head != NULL)
    {
        int iNo = Head->data;
        iMax = iNo % 10;
        while (iNo != 0)
        {
            if (iMax < (iNo % 10))
            {
                iMax = iNo % 10;
            }
            iNo = iNo / 10;
        }
        printf("MAX(%d) -> %d\n", Head->data, iMax);
        Head = Head->next;
    }
}