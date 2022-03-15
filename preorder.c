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
	struct Node *n=(struct Node*)malloc(sizeof(struct Node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}

void preorder(struct Node *p)
{
	if(p!=NULL)
	{
	printf("%d ",p->data);
	preorder(p->left);
	preorder(p->right);
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
	
	printf("The preorder traversal is : ");
	preorder(p);
	return 0;
}
