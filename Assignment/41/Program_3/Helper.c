///////////////////////////////////////////////////////
//
//Function Name : DisplayProduct
//Input : First Pointer
//Output : void
//Description : It is used to display product of each element of Linked list.
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

void DisplayProduct(PNODE Head)
{
    int iSum = 1;
    while (Head != NULL)
    {
        int iNo = Head->data;
        iSum = 1;
        while (iNo != 0)
        {
            if ((iNo % 10) != 0)
            {
                iSum = iSum * (iNo % 10);
            }
            iNo = iNo / 10;
        }
        printf("%d => %d\n", Head->data, iSum);
        Head = Head->next;
    }
}