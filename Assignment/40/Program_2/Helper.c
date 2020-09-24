/////////////////////////////////////////////////
//
//Function Name : DisplayPrime
//Input : first pointer
//Output : none
//Description : It is used to find prime number from the nodes.
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

void DisplayPrime(PNODE Head)
{
    int iNo = 0, iCnt = 0, iPrime = 0;
    if (Head == NULL)
    {
        printf("Linked List is Empty\n");
        return;
    }
    while (Head != NULL)
    {
        iNo = Head->data;
        iPrime = 0;
        for (iCnt = 2; iCnt <= iNo; iCnt++)
        {
            if (iNo % iCnt == 0)
            {
                iPrime++;
            }
        }
        if (iPrime == 1)
        {
            printf("%d\t", iNo);
        }

        Head = Head->next;
    }
    printf("\n");
}
