#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
	struct Node *previous;
};

void FrontBackTraversal(struct Node *head)
{
 struct Node *ptr=head;
 printf("The List Is\n");
while(ptr->next!=NULL)
 {
 	printf("%d\t",ptr->data);
 	ptr=ptr->next;
 }
 printf("%d",ptr->data);
 printf("\nThe List In Reversed Order\n");
while(ptr->previous!=NULL)
 {
 	printf("%d\t",ptr->data);
 	ptr=ptr->previous;
 } 
 printf("%d",ptr->data);
	
}

int main()
{
	struct Node *head=(struct Node *)malloc(sizeof(struct Node));
	struct Node *first=(struct Node *)malloc(sizeof(struct Node));
	struct Node *second=(struct Node *)malloc(sizeof(struct Node));
	struct Node *third=(struct Node *)malloc(sizeof(struct Node));
	
	head->data=1;
	head->next=first;
	head->previous=NULL;
	
	first->data=2;
	first->next=second;
	first->previous=head;
	
	second->data=3;
	second->next=third;
	second->previous=first;
	
	third->data=4;
	third->next=NULL;
	third->previous=second;
	
	FrontBackTraversal(head);
	return 0;
}
