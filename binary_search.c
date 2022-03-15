#include<stdio.h>
//binary search
int binarysearch(int arr[],int n,int element)
{
	int low,mid,high;
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<=high)
	{
		if(arr[mid]==element)
		{
			return mid;
		}
		
		if(arr[mid]>element)
		{
			high=mid-1;
		}
		else{
			low=mid+1;
		}
		
	}
	return -1;
	
	
}
int main()
{
	int arr[10],n,i,element;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements of the array in sorted order\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter element to be searched\n");
	scanf("%d",&element);
	int search_index=binarysearch(arr,n,element);
	printf("Element %d found at index %d",element,search_index);
	return 0;
}
