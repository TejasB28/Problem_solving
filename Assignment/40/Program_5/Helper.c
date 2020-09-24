/////////////////////////////////////////////////
//
//Function Name : SumDigit
//Input : first pointer
//Output : none
//Description : It is used to sum of digits of nodes .
//Author : Tejas A. Bora
//Date : 8 sep 2020
//
/////////////////////////////////////////////////

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

void SumDigit(PNODE Head)
{
    int iNo = 0, iSum = 0;
    if (Head == NULL)
    {
        return;
    }
    while (Head != NULL)
    {
        iNo = Head->data;
        iSum = 0;
        while (iNo != 0)
        {
            iSum = iSum + (iNo % 10);
            iNo = iNo / 10;
        }
        printf("%d => %d\n", Head->data, iSum);
        Head = Head->next;
    }
}
