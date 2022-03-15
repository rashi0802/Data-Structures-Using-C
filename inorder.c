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

void inorder(struct Node *p)
{
	if(p!=NULL)
	{
	inorder(p->left);
	printf("%d ",p->data);
	inorder(p->right);
	}

}

int main()
{
	struct Node *p=create(2);
	struct Node *p1=create(5);
	struct Node *p2=create(6);
	struct Node *p3=create(7);
	struct Node *p4=create(8);
	struct Node *p5=create(9);
	struct Node *p6=create(0);
	
	p->left=p1;
	p->right=p2;
	p2->right=p6;
	p1->left=p3;
	p3->left=p4;
	p3->right=p5;
	
	printf("The inorder traversal is : ");
	inorder(p);
	return 0;
}
