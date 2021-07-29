#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* removeDuplicates(Node *head)
{
    if(head==NULL || head->next==NULL)
        return head;
    else
    {
        if(head->data==head->next->data){
            head->next=head->next->next;
            removeDuplicates(head);
        }
        else
            removeDuplicates(head->next);

    }
    return head;
}

Node* insert(Node *head,int data)
{
  Node *p = (Node*)malloc(sizeof(Node));
  p->data = data;
  p->next=NULL;

  if(head==NULL){
   head=p;

  }
  else if(head->next==NULL)
  {
      head->next=p;

  }
  else{
  Node *start=head;
  while(start->next!=NULL)
    start=start->next;

  start->next=p;

  }
      return head;
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
    head=removeDuplicates(head);
	display(head);

}

