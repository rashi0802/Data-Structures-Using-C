#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node *next; 
};

void LinkedListTraversal(struct Node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}

//deletion at beginning
struct Node * deletionAtstart(struct Node *head)
{
	struct Node *ptr=head;
	head=head->next;
	free(ptr);
	return head;
}
//deletion at index

struct Node * deletionAtindex(struct Node *head, int index)
{
	int i=0;
	struct Node *p=head;
	while(i!=index-1)
	{
		p=p->next;
		i++;
	}
	struct Node *q=p->next;
	p->next=q->next;
	free(q);
	return head;
}

//deleting last node
struct Node *deletionAtlast(struct Node *head)
{
	struct Node *p=head;
	struct Node *q=head->next;
	while(q->next!=NULL)
	{
		p=p->next;
		q=q->next;
	}
	p->next=NULL;
	free(q);	
	return head;
}

//deletion element with a given value
struct Node * deletionAtvalue(struct Node *head, int value)
{
	struct Node *p=head;
	struct Node *q=head->next;
	while(q->data!=value)
	{
		p=p->next;
		q=q->next;
	}
	
	if(q->data==value)
	p->next=q->next;
	return head;
}

int main()
{
struct Node *head=(struct Node *)malloc(sizeof(struct Node));
struct Node *first=(struct Node *)malloc(sizeof(struct Node));
struct Node *second=(struct Node *)malloc(sizeof(struct Node));
struct Node *third=(struct Node *)malloc(sizeof(struct Node));

head->data=1;
head->next=first;

first->data=2;
first->next=second;

second->data=3;
second->next=third;

third->data=4;
third->next=NULL;
printf("List Before Deletion\n");
LinkedListTraversal(head);
//head=deletionAtstart(head);
//head=deletionAtindex(head,2);
//head=deletionAtlast(head);
head=deletionAtvalue(head,2);
printf("\nList After Deletion\n");
LinkedListTraversal(head);
return 0;	
}
