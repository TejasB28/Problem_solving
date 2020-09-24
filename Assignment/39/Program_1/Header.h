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

typedef int BOOL;
#define TRUE 1
#define FALSE 0

void InsertFirst(PPNODE, int);
int SearchFirstOcc(PNODE, int);