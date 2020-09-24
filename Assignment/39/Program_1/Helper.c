/////////////////////////////////////////////////
//
//Function Name : SearchFirstOcc
//Input : first pointer,int
//Output : int
//Description : It is used to find first occurance of number
//Author : Tejas A. Bora
//Date : 8 sep 2020
//
/////////////////////////////////////////////////

#include "Header.h"

int SearchFirstOcc(PNODE Head, int iNo)
{
    int iCnt = 0;
    if (Head == NULL)
    {
        return -1;
    }

    while (Head != NULL)
    {
        iCnt++;
        if (Head->data == iNo)
        {
            break;
        }

        Head = Head->next;
    }
    return iCnt;
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
