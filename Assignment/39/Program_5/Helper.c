/////////////////////////////////////////////////
//
//Function Name : Minimum
//Input : first pointer
//Output : int
//Description : It is used to return Minimum of all elements.
//Author : Tejas A. Bora
//Date : 8 sep 2020
//
/////////////////////////////////////////////////

#include "Header.h"

int Minimum(PNODE Head)
{
    int iMin = 0;
    if (Head == NULL)
    {
        return -1;
    }
    iMin = Head->data;
    while (Head != NULL)
    {
        if (iMin > Head->data)
        {
            iMin = Head->data;
        }
        Head = Head->next;
    }
    return iMin;
}

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