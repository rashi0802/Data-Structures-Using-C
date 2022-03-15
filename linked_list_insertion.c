#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

void LinkedListTraversal(struct Node *ptr)
{
	while(ptr!=NULL)
	{
		printf("Element: %d\n",ptr->data);
		ptr=ptr->next;
	}
}

//case 1: Insertion At Beginning 
struct Node * insertAtFirst(struct Node *head, int data)
{
	struct Node *ptr;
    ptr=(struct Node *)malloc(sizeof(struct Node));
	
	
	ptr->data=data;
	ptr->next=head;
	return ptr;
}

//case 2: Insertion At End

struct Node *insertAtEnd(struct Node *head,int data)
{
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
	ptr->data=data;
	struct Node *p=head;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=ptr;
	ptr->next=NULL;
	return head;
}

// case 3: Insertion at Index

struct Node * insertAtIndex(struct Node *head, int index,int data)
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

//case 4: Insertion after a given node

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
	struct Node *head;
	struct Node *third;
	struct Node *second;
	
	head=(struct Node *)malloc(sizeof(struct Node));
	second=(struct Node *)malloc(sizeof(struct Node));
	third=(struct Node *)malloc(sizeof(struct Node));
	
	
	head->data=1;
	head->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=NULL;
	
	printf("Linked List Before Insertion\n");
	LinkedListTraversal(head);
	//head=insertAtFirst(head,3433);
	//head=insertAtEnd(head,3433);
	//head=insertAtIndex(head,2,455);
	head=insertAfterNode(head,second,567);
	
	printf("After Insertion\n");
	LinkedListTraversal(head);
	return 0;
}
