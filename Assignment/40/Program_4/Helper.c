/////////////////////////////////////////////////
//
//Function Name : SecMaximum
//Input : first pointer
//Output : int
//Description : It is used to return the seacond maximum number.
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

int SecMaximum(PNODE Head)
{
    int iMax1 = 0, iMax2 = 0, iNo = 0;
    if (Head == NULL)
    {
        printf("Linked List is Empty\n");
        return -1;
    }
    iMax1 = Head->data;
    iMax2 = (Head->next)->data;

    if (iMax1 < iMax2)
    {
        iMax1 = (Head->next)->data;
        iMax2 = Head->data;
    }

    while (Head != NULL)
    {
        iNo = Head->data;

        if (iMax1 < iNo)
        {
            iMax2 = iMax1;
            iMax1 = iNo;
        }
        if ((iMax2 < iNo) && (iMax1 > iNo))
        {
            iMax2 = iNo;
        }

        Head = Head->next;
    }
    printf("\n");
    return iMax2;
}
