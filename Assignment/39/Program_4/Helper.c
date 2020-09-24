/////////////////////////////////////////////////
//
//Function Name : Maximum
//Input : first pointer
//Output : int
//Description : It is used to return Maximum of all elements.
//Author : Tejas A. Bora
//Date : 8 sep 2020
//
/////////////////////////////////////////////////

#include "Header.h"

int Maximum(PNODE Head)
{
    int iMax = 0;
    if (Head == NULL)
    {
        return -1;
    }
    iMax = Head->data;
    while (Head != NULL)
    {
        if (iMax < Head->data)
        {
            iMax = Head->data;
        }
        Head = Head->next;
    }
    return iMax;
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