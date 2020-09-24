/////////////////////////////////////////////////
//
//Function Name : DisplayPerfect
//Input : first pointer
//Output : void
//Description : It is used to find perfect number from the nodes.
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

void Display(PNODE Head)
{
    while (Head != NULL)
    {
        printf("%d\t", Head->data);
        Head = Head->next;
    }
    printf("\n");
}

void DisplayPerfect(PNODE Head)
{
    int iNo = 0, iCnt = 0, iSum = 1;
    if (Head == NULL)
    {
        printf("Linked List is Empty\n");
        return;
    }
    while (Head != NULL)
    {
        iNo = Head->data;
        iSum = 1;
        for (iCnt = 2; iCnt <= iNo / 2; iCnt++)
        {
            if ((iNo % iCnt) == 0)
            {
                iSum += iCnt;
            }
        }
        if (iSum == iNo)
        {
            printf("%d\t", iNo);
        }
        Head = Head->next;
    }
}
