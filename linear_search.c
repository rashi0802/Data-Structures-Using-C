#include<stdio.h>
int main()
{
	int arr[10],i,n,element;
	printf("Enter number of elements in the array\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be searched\n");
	scanf("%d",&element);
	for(i=0;i<n;i++)
	{
		if(arr[i]==element)
		{
			printf("Element found at index %d",i);
			break;
		}
	}
	return 0;
}
