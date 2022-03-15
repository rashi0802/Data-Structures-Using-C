#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};

struct Node *front=NULL;
struct Node *rear=NULL;

void traversal(struct Node *ptr)
{
	printf("The Queue is\n");
	while(ptr!=NULL)
	{
		printf("Element: %d\n",ptr->data);
		ptr=ptr->next;
	}
}

void enqueue(int value)
{
	struct Node *n=(struct Node *)malloc(sizeof(struct Node));
	if(n==NULL)
	printf("The List is Full\n");
	else
	{
		n->data=value;
		n->next=NULL;
		if(front==NULL)
		{
			front=rear=n;
		}
		else
		{
			rear->next=n;
			rear=n;
		}
		printf("Element enqueued is %d\n",value);
	}
}

void dequeue()
{
	if(front==NULL)
	printf("The Queue is Empty\n");
	else
	{
		struct Node *ptr=front;
		front=front->next;
		int value=ptr->data;
		printf("The value dequeued is %d\n",value);
		free(ptr);
	}
}

int main()
{	
	enqueue(10);
	enqueue(20);
	enqueue(40);
	dequeue();
	enqueue(30);
	enqueue(50);
	enqueue(70);
	dequeue();
	dequeue();
	dequeue();
	enqueue(440);
	enqueue(480);
	enqueue(500);
	dequeue();
	traversal(front);
	return 0;
}
