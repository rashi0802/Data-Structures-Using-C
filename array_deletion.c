#include<stdio.h>
int main()
{
	int arr[10],n,index,i,j;
	printf("Enter number of elements in array\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	//deletion
	printf("Enter the index to be deleted\n");
	scanf("%d",&index);
	
	for(j=index;j<n-1;j++)
	{
		arr[j]=arr[j+1];
	}
	
	//traversal
	for(i=0;i<n-1;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
