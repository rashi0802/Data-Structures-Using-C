#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

int main(){
	struct Node *head;
	struct Node *second;
	struct Node *third;
	
	// allocate memory for nodes in the linked list in heap
	head=(struct Node *)malloc(sizeof(struct Node));
	second=(struct Node *)malloc(sizeof(struct Node));
	third=(struct Node *)malloc(sizeof(struct Node));
	
	//allocate data
	head->data=7;
	head->next=second;
	
	second->data=80;
	second->next=third;
	
	third->data=90;
	third->next=NULL;
	
	//traversal
	while(head!=NULL)
	{
		printf("Element : %d\n",head->data);
		head= head->next;
	}
	return 0;
}
