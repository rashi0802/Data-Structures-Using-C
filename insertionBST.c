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

int isBST(struct Node *root)
{
	struct Node *previous=NULL;
	if(root!=NULL)
	{
		if(!isBST(root->left))
		return 0;
		if(previous!=NULL && (previous->data>=root->data))
		return 0;
		previous=root;
		isBST(root->right);
	}
	else
	return 1;
}

int insertBST(struct Node *root, int key)
{
	struct Node *previous;
	while(root!=NULL)
	{
		previous=root;
		if(key==root->data)
	    return 0;
	    if(key<root->data)
	    root=root->left;
	    else
	    root=root->right;
	}
	struct Node *new=create(key);
	if(previous->data>key)
	previous->left=new;
	else
	previous->right=new;
	return 1;
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
	printf("Enter the value to insert in BST\n");
	scanf("%d",&value);
	printf("\nPerforming Insertion Operation\n");
	if(isBST(p))
	{
		if(insertBST(p,value))
		printf("Element %d inserted in the BST\n",value);
		else
		printf("Value could not be inserted\n");
	}
	else
	{
		printf("\nThe tree is not Binary Search Tree\n");
	}
	printf("The inorder traversal after insertion is: ");
	inorder(p);
	return 0;
}
