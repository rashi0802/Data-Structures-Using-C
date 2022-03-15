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
	p->right=NULL;
	p->left=NULL;
	p->data=data;
	return p;
}

int isBST(struct Node *root)
{
	struct Node *previous=NULL;
	if(root!=NULL)
	{
	 if(!isBST(root->left))
	 return 0;
	 if(previous!=NULL && (root->data<= previous->data))
	 return 0;
	 previous=root;
	 isBST(root->right);
	}
	else
	return 1;	
}

int searchBST(struct Node *root, int data)
{
	if(root==NULL)
	return 0;
	if(root->data==data)
	return 1;
	else if(root->data>data)
	searchBST(root->left,data);
	else
	searchBST(root->right,data);
}

void inorder(struct Node *n)
{
	if(n!=NULL)
	{
	inorder(n->left);
	printf("%d ",n->data);
	inorder(n->right);
	}

}

int main()
{
	int value;
	struct Node *p=create(5);
	struct Node *p1=create(3);
	struct Node *p2=create(9);
	struct Node *p3=create(1);
	struct Node *p4=create(4);
	struct Node *p5=create(6);
	struct Node *p6=create(11);
	
	p->left=p1;
	p->right=p2;
	p2->right=p2;
	p1->left=p3;
	p1->right=p4;
	p2->left=p5;
	p2->right=p6;

	printf("The inorder traversal of the BST is: ");
	inorder(p);
	printf("\n");
	printf("Enter the value to search in BST\n");
	scanf("%d",&value);
	if(isBST(p))
	{
		if(searchBST(p,value))
		printf("Element %d found in the BST\n",value);
		else
		printf("Value not found\n");
	}
	else
	{
		printf("\nThe tree is not Binary Search Tree\n");
	}
	return 0;
}
