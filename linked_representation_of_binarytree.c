#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};

struct Node* create(int data)
{
	struct Node *n;
	n->data=data;
	n->left=NULL;
	n->right=NULL;
}

int main()
{
	struct Node *p=create(2);
	struct Node *p1=create(3);
	struct Node *p2=create(5);
	
	p->left=p1;
	p->right=p2;
	return 0;
}
