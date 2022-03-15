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
	if(q->rear==q->front)
	return 1;
	else
	return 0;
}

int isFull(struct queue *q)
{
	if(q->front==(q->rear+1)%q->size)
	return 1;
	else
	return 0;
}

void enqueue(struct queue *q,int value)
{
if(isFull(q))
printf("The queue is Full\n");
else
{
	q->rear=(q->rear+1)%q->size;
	q->arr[q->rear]=value;	
	printf("Value enqueued is %d\n",value);
}	
}

void dequeue(struct queue *q)
{
	if(isEmpty(q))
	printf("The queue is empty\n");
	else
	{
		int val;
		q->front=(q->front+1)%q->size;
		val=q->arr[q->front];
		printf("Value dequed is %d\n",val);
	}
}

int main()
{
	struct queue *q=(struct queue*)malloc(sizeof(struct queue));
	q->size=10;
	q->front=-1;
	q->rear=-1;
	q->arr=(int*)malloc(sizeof(int)*(q->size));
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
	dequeue(q);
	dequeue(q);
	dequeue(q);
	dequeue(q);
	enqueue(q,440);
	enqueue(q,480);
	dequeue(q);
	return 0;
}
