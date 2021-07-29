#include <stdlib.h>
#include <stdio.h>
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* createNode()
{
    Node *n;
    n=(Node*)malloc(sizeof(Node));
    return n;
}
Node* insert(Node *head,int value)
{
    //Complete this function
    Node *n,*t,*temp;
    n=createNode();
    n->data=value;
    n->next=NULL;
    if(head==NULL)
    {
        return n;
    }
    else
    {
        t=head;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=n;
        return head;
    }
}

void display(Node *head)
{
	Node *start=head;
	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}
int main()
{
	int T,data;
    scanf("%d",&T);
    Node *head=NULL;
    while(T-->0){
        scanf("%d",&data);
        head=insert(head,data);
    }
  display(head);

}
