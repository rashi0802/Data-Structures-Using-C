#include<stdio.h>
#include<stdlib.h>
struct Node *front=NULL;
struct Node *rear=NULL;
struct Node
{
	int data;
	struct Node *next;
	struct Node *previous;
};

void traversal(struct Node *ptr)
{
	printf("Elements in the queue after operations are\n");
	while(ptr!=NULL)
	{
		printf("Element: %d\n",ptr->data);
		ptr=ptr->next;
	}
}

void frontEnqueue(int value)
{
	struct Node *n=(struct Node *)malloc(sizeof(struct Node));
	n->data=value;
	if(n==NULL)
	printf("Cannot insert from front end\n");
	else if(front==NULL)
	{
		front=rear=n;
		printf("Value enqueued at front is %d\n",value);
	}
	{	
		n->next=front;
		front->previous=n;
		front=n;
		printf("Value enqueued at front is %d\n",value);
	}
}

void frontDequeue()
{
	if(front==NULL)
	printf("Queue is empty\n");
	else
	{
		int value;
		struct Node *ptr=front;
		value=ptr->data;
		front=front->next;
		front->previous=NULL;
		free(ptr);
		printf("The value dequeued from front is %d\n",value);
	}
}

void rearEnqueue(int value)
{
	struct Node *n=(struct Node*)malloc(sizeof(struct Node));
	if(n==NULL)
	printf("Overflow\n");
	else
	{
		n->data=value;
		n->next=NULL;
		if(front==NULL)
		{
			front=rear=n;
			printf("Value enqueued at rear is %d\n",value);
		}
		else
		{
			rear->next=n;
			n->previous=rear;
			rear=n;
			printf("Value enqueued at rear is %d\n",value);
		}
	}
}

void rearDequeue()
{
	if(front==NULL)
	printf("Queue is empty\n");
	else
	{
		int value;
		struct Node *ptr=rear;
		value=ptr->data;
		rear=rear->previous;
		rear->next=NULL;
		free(ptr);
		printf("The value dequeued from rear is %d\n",value);	
	}
}

int main()
{
	rearEnqueue(10);
	rearEnqueue(20);
	frontEnqueue(40);
	frontEnqueue(89);
	frontDequeue();
	rearEnqueue(50);
	rearEnqueue(70);
	rearDequeue();
	frontDequeue();
	frontDequeue();
	rearEnqueue(440);
	frontEnqueue(480);
	rearEnqueue(500);
	rearDequeue();
	traversal(front);
	
	return 0;
}

