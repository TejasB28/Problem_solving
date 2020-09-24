///////////////////////////////////////////////////////
//
//Function Name : DisplaySmall
//Input : First Pointer
//Output : void
//Description : It is used to display smallest digit from each element of Linked list.
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

void DisplaySmall(PNODE Head)
{
    int iMin = 0;
    while (Head != NULL)
    {
        int iNo = Head->data;
        iMin = iNo % 10;
        while (iNo != 0)
        {
            if (iMin > (iNo % 10))
            {
                iMin = iNo % 10;
            }
            iNo = iNo / 10;
        }
        printf("MIN(%d) -> %d\n", Head->data, iMin);
        Head = Head->next;
    }
}