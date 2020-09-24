/////////////////////////////////////////////////
//
//Function Name : Addition
//Input : first pointer
//Output : int
//Description : It is used to retuen addition of all elements.
//Author : Tejas A. Bora
//Date : 8 sep 2020
//
/////////////////////////////////////////////////

#include "Header.h"

int Addition(PNODE Head)
{
    int iSum = 0;
    if (Head == NULL)
    {
        return -1;
    }

    while (Head != NULL)
    {
        iSum += Head->data;
        Head = Head->next;
    }
    return iSum;
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