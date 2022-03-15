#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

//Traversal
void Traversal(struct Node *head)
{
	struct Node *ptr=head;
	do
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;	
	}while(ptr!=head);
}

//Deletion From beginning
struct Node *deletionFromFirst(struct Node *head)
{
	struct Node *p=head;
	struct Node *q=head;
	while(q->next!=head)
	{
		q=q->next;
	}
	head=head->next;
	q->next=head;
	free(p);	
	return head;
}

//Deletion From End
struct Node * deletionFromEnd(struct Node *head)
{
	struct Node *p=head;
	struct Node *q=head->next;
	
	while(q->next!=head)
	{
		p=p->next;
		q=q->next;
	}
	p->next=q->next;
	free(q);
	return head;	
}

//Deletion at an index
struct Node * deletionAtIndex(struct Node *head, int index)
{
	int i=0;
	struct Node *p=head;
	struct Node *q=head->next;
	while(i!=index-1)
	{
		p=p->next;
		q=q->next;
		i++;
	}
	p->next=q->next;
	free(q);
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
	third->next=head;
	
	printf("Before Deletion\n");
	Traversal(head);
	printf("\nAfter Deletion\n");
	//head=deletionFromFirst(head);
	//head=deletionFromEnd(head);
	head=deletionAtIndex(head,2);
	Traversal(head);
	
return 0;	
}
