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
	struct Node *p=(struct Node*)malloc(sizeof(struct Node));
	p->data=data;
	p->left=NULL;
	p->right=NULL;
	return p;
}

void inorder(struct Node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}
}

int isBST(struct Node *root)
{
	struct Node *previous=NULL;
	if(root!=NULL)
	{
		if(!isBST(root->left))
		return 0;
		if(root->previous!=NULL && (previous->data>=root->data))
		return 0;
		if()
	}
}
int main()
{
	return 0;
}
