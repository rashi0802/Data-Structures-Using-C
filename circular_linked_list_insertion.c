#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};

//Traversal
void LinkedListTraveral(struct Node *head)
{
	struct Node *ptr=head;
	do
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}while(ptr!=head);
}

//Insert at first
struct Node * insertionAtFirst(struct Node *head, int data)
{
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
	ptr->data=data;
	struct Node *p=head;
	while(p->next!=head)
	{
		p=p->next;
	}
	ptr->next=head;
	p->next=ptr;
	return ptr;
}

//Insert at end
struct Node *insertAtEnd(struct Node *head, int data)
{
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
	ptr->data=data;
	struct Node *p=head;
	while(p->next!=head)
	{
		p=p->next;
	}
	ptr->next=head;
	p->next=ptr;
	return head;
}

//Insertion at index
struct Node *insertAtindex(struct Node *head, int data, int index)
{
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
	ptr->data=data;
	struct Node *p=head;
	int i=0;
	while(i!=index-1)
	{
		p=p->next;
		i++;
	}
	ptr->next=p->next;
	p->next=ptr;
	return head;
	
}
//Insertion after a node
struct Node * insertAfterNode(struct Node *head, struct Node *node, int data)
{
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
	ptr->data=data;
	ptr->next=node->next;
	node->next=ptr;
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
	
	printf("Before Insertion\n");
	LinkedListTraveral(head);
	printf("\nAfter Insertion\n");
	//head=insertionAtFirst(head, 0);
	//head=insertAtEnd(head,0);
	//head=insertAtindex(head,0,2);
	head=insertAfterNode(head,second,0);
	LinkedListTraveral(head);
	return 0;
}
