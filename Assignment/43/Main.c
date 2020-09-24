/*
Doubly Circular LinkedList
*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

void Display(PNODE Head, PNODE Tail)
{
    do
    {
        printf("|%d|->", Head->data);
        Head = Head->next;
    } while (Head != Tail->next);
    printf("|%d|\n", Tail->next->data);
}

int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;
    do
    {
        iCnt++;
        Head = Head->next;
    } while (Head != Tail->next);
    return iCnt;
}

void InsertFirst(PPNODE Head, PPNODE Tail, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    if ((*Head == NULL) || (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
    (*Tail)->next = newn;
}

void InsertLast(PPNODE Head, PPNODE Tail, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    if ((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->next = *Head;
        (*Tail)->next = newn;
        *Tail = (*Tail)->next;
    }
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if ((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    else if ((*Head)->next == *Tail)
    {
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        (*Tail)->next = (*Head)->next;
        free(*Head);
        *Head = (*Tail)->next;
    }
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    PNODE temp = *Head;
    if ((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    else if ((*Head)->next == *Tail)
    {
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        while (temp->next != *Tail)
        {
            temp = temp->next;
        }
        temp->next = *Head;
        free(*Tail);
        *Tail = temp;
    }
}

void InsertAtPos(PPNODE Head, PPNODE Tail, int iNo, int iPos)
{
    PNODE temp = NULL;
    PNODE newn = NULL;
    int iSize = Count(*Head, *Tail);
    int i = 0;

    if ((iPos < 1) || (iPos > iSize + 1))
    {
        return;
    }
    if (iPos == 1)
    {
        InsertFirst(Head, Tail, iNo);
    }
    else if (iPos == iSize + 1)
    {
        InsertLast(Head, Tail, iNo);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->next = NULL;
        newn->data = iNo;
        temp = *Head;

        for (i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{
    PNODE temp = NULL;
    PNODE temp1 = NULL;
    int i = 0;
    int iSize = Count(*Head, *Tail);

    if ((iPos < 1) || (iPos > iSize))
    {
        return;
    }
    if (iPos == 1)
    {
        DeleteFirst(Head, Tail);
    }
    else if (iPos == iSize)
    {
        DeleteLast(Head, Tail);
    }
    else
    {
        temp = *Head;
        for (i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        temp1 = temp->next;
        temp->next = temp->next->next;
        free(temp1);
    }
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    int iNo = 0, iPos = 0, iCh = 0;

    while (1)
    {
        printf("\n<------Opearations------>\n");
        printf("1 : Insert Node At First Position \n");
        printf("2 : Insert Node At Last Position \n");
        printf("3 : Insert Node At Any Position \n");
        printf("4 : Delete Node At First Position \n");
        printf("5 : Delete Node At Last Position \n");
        printf("6 : Delete Node At Any Position \n");
        printf("7 : Display LinkedList\n");
        printf("8 : Count Nodes of LinkedList \n");
        printf("9 : Exit\n");
        printf("Select your Choice : ");
        scanf("%d", &iCh);
        switch (iCh)
        {
        case 1:
            printf("Enter Number : ");
            scanf("%d", &iNo);
            InsertFirst(&First, &Last, iNo);
            break;

        case 2:
            printf("Enter Number : ");
            scanf("%d", &iNo);
            InsertLast(&First, &Last, iNo);
            break;

        case 3:
            printf("Enter Number : ");
            scanf("%d", &iNo);
            printf("Enter Position :");
            scanf("%d", &iPos);
            InsertAtPos(&First, &Last, iNo, iPos);
            break;

        case 4:
            DeleteFirst(&First, &Last);
            break;

        case 5:
            DeleteLast(&First, &Last);
            break;

        case 6:
            printf("Enter Position :");
            scanf("%d", &iPos);
            DeleteAtPos(&First, &Last, iPos);
            break;

        case 7:
            Display(First, Last);
            break;

        case 8:
            printf("Number of Nodes in LinkedList are : %d", Count(First, Last));
            break;

        case 9:
            exit(0);

        default:
            printf("Enter valid choice \n");
            break;
        }
    }

    return 0;
}
