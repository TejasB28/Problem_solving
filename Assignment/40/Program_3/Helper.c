/////////////////////////////////////////////////
//
//Function Name : AdditionEven
//Input : first pointer
//Output : int
//Description : It is used to return addition of even data.
//Author : Tejas A. Bora
//Date : 8 sep 2020
//
/////////////////////////////////////////////////

#include "Header.h"

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->next = NULL;
    newn->data = no;

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

int AdditionEven(PNODE Head)
{
    int iSum = 0, iNo = 0;
    if (Head == NULL)
    {
        printf("Linked List is Empty\n");
        return -1;
    }
    while (Head != NULL)
    {
        iNo = Head->data;
        if (iNo % 2 == 0)
        {
            iSum += iNo;
        }
        Head = Head->next;
    }
    printf("\n");
    return iSum;
}
