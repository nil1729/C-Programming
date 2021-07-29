#include<stdio.h>
struct node
{
    int info;
    struct node *link;
};
struct node *START=NULL;
struct node* createNode()
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    return n;
}
void insertNode()
{
    struct node *temp,*t;
    temp=createNode();
    printf("ENTER  A  NUMBER:\n");
    scanf("%d",&temp->info);
    temp->link=NULL;
    if(START==NULL)
        START=temp;
    else
    {
        t=START;
        while(t->link!=NULL)
        {
            t=t->link;
        }
        t->link=temp;
    }
}
void deleteNode()
{
    struct node *r;
    if(START==NULL)
        printf("LIST  IS  EMPTY\n");
    else
    {
        r=START;
        START=START->link;
        free(r);
    }
}
void viewList()
{
    struct node *t;
    if(START==NULL)
        printf("LIST IS EMPTY\n");
    else
    {
        t=START;
        while(t!=NULL)
        {
            printf("%d ",t->info);
            t=t->link;
        }
    }
}
int menu()
{
    int ch;
    printf("\n 1. ADD VALUE TO THE LIST \n 2. DELETE FIRST VALUE \n 3. VIEW LIST \n 4. EXIT");
    printf("\n ENTER  YOUR  CHOICE :\t");
    scanf("%d",&ch);
    return ch;
}
void main()
{
    while(1)
    {
        switch(menu())
        {
        case 1:
            insertNode();
            break;
        case 2:
            deleteNode();
            break;
        case 3:
            viewList();
            break;
        case 4:
            return 0;
        default:
            printf("INVALID CHOICE\n");
        }
        for(int i=0;i<10;i++)
            printf("\n");
    }
}
