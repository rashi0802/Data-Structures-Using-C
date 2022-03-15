#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int size;
	int top;
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

void push(struct stack *ptr, int value)
{
	if(stackFull(ptr))
	printf("Cannot push %d to the stack\n",value);
	else
	{
		ptr->top++;
		ptr->arr[ptr->top]=value;
		printf("Element %d pushed to the stack\n",value);
	}
}

void pop(struct stack *ptr)
{
	if(stackEmpty(ptr))
	printf("Stack Underflow\n");
	else
	{
		int temp=ptr->arr[ptr->top];
		ptr->top--;
		printf("Element popped is %d\n",temp);
	}
}
int main()
{
	struct stack *s=(struct stack *)malloc(sizeof(struct stack));
	s->top=-1;
	s->size=10;
	s->arr=(int *)malloc(sizeof(int)* s->size);
	push(s,2);
	push(s,3);
	push(s,5);
	pop(s);
	return 0;
}
