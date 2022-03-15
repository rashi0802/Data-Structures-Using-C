#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int size;
	int front;
	int rear;
	int *arr;	
};

int isEmpty(struct queue *q)
{
	if(q->front==q->rear)
	return 1;
	else
	return 0;
}

int isFull(struct queue *q)
{
	if(q->rear==q->size-1)
	return 1;
	else
	return 0;	
}

void enqueue(struct queue *q,int value)
{
	if(isFull(q))
	printf("Queue is Full\n");
	else
	{
		q->rear++;
		q->arr[q->rear]=value;
		printf("Value added is %d\n",value);
	}
}

void dequeue(struct queue *q)
{
	int out;
	if(isEmpty(q))
	printf("The queue is empty\n");
	else
	{
		q->front++;
		out=q->arr[q->front];
	}
	printf("The value dequeued is %d\n",out);
}

int main()
{
	struct queue *q=(struct queue *)malloc(sizeof(struct queue));
	q->size=10;
	q->front=q->rear=-1;
	q->arr=(int*)malloc(q->size*sizeof(int));
	enqueue(q,10);
	enqueue(q,20);
	enqueue(q,40);
	dequeue(q);
	enqueue(q,30);
	enqueue(q,50);
	enqueue(q,70);
	dequeue(q);
	dequeue(q);
	dequeue(q);
return 0;	
}
