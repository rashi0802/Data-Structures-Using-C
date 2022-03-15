#include<stdio.h>
#include<stdlib.h>

struct stack
{
	int top;
	int size;
	int *arr;
};

int stackEmpty(struct stack *ptr)
{
	if(ptr->top==-1)
	return 1;
	else
	return 0;
}

int stackFull(struct stack *ptr)
{
	if(ptr->top==ptr->size-1)
	return 1;
	else
	return 0;
}

void push(struct stack *ptr, int data)
{
	if(stackFull(ptr))
	printf("Cannot push %d to the stack\n",data);
	else
	{
		ptr->top++;
		ptr->arr[ptr->top]=data;
		printf("Pushed %d to the stack\n");
	}
}

void pop(struct stack *ptr)
{
	if(stackEmpty(ptr))
	printf("Stack underflow\n");
	else
	{
		int temp=ptr->arr[ptr->top];
		ptr->top--;
		printf("Popped %d from the stack\n",temp);
	}
}

void peek(struct stack *ptr, int i)
{
	if(stackEmpty(ptr))
	printf("Stack underflow\n");
	else
	{
		int arrindex= ptr->top-i+1;
		printf("Element at position %d is %d\n", i, ptr->arr[arrindex]);
	}
}
int main()
{
	int j;
	struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
	sp->size=5;
	sp->top=-1;
	sp->arr=(int *)malloc(sizeof(int)*sp->size);
	push(sp,2);
	push(sp,3);
	push(sp,4);
	push(sp,6);
	push(sp,7);
	push(sp,3);
	for(j=1;j<sp->top+1;j++)
	{
		peek(sp,j);
	}
	
	return 0;
}
