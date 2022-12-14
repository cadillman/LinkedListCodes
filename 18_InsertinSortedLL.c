#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct node *next;
}*final = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node *));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node *));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}


void SortedInsert(struct Node *p)
{
    struct Node *t, *q=NULL;
    t=(struct Node*)malloc(sizeof(struct Node*));
    t->data=x;
    t->next=NULL;

    if(first==NULL)
    first=t;
    else
    {
        while(p && p->data<x)
        {
            q=p;
            p=p->next;
        }
        if(p==first)
        {
            t->next=first;
            first=t;
        }
        else{
            t->next=q->next;
            q->next=t;
        }
    }
}

int main()
{
    int A[]={2,4,6,8,10};
    create(A,5);
    SortedInsert(first,35);
    display(first);
    printf("\n\n");
    return 0;
}