/////////////////////////////////////////////////
//
//Function Name : SearchLastOcc
//Input : first pointer,int
//Output : int
//Description : It is used to find last occurance of number
//Author : Tejas A. Bora
//Date : 8 sep 2020
//
/////////////////////////////////////////////////

#include "Header.h"

int SearchLastOcc(PNODE Head, int iNo)
{
    int iCnt = 0, iPos = 1;
    if (Head == NULL)
    {
        return -1;
    }
    while (Head->next != NULL)
    {
        if (Head->data == iNo)
        {
            iCnt = iPos;
        }
        iPos++;
        Head = Head->next;
    }
    return iCnt;
}

void InsertFirst(PPNODE Head, int iValue)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iValue;
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