#include<stdio.h>
#include<stdlib.h>
struct Node 
{
	int data;
	struct Node *next;
};

void Linked_List_Traversal(struct Node *ptr)
{
	struct Node *p=ptr;
	do
	{
		printf("%d\t",p->data);
		p=p->next;
	}while(p!=ptr);
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
	
	Linked_List_Traversal(head);
	return 0;
	
}
