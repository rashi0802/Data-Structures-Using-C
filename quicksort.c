#include<stdio.h>
#include<stdlib.h>

void printarray(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

void quicksort(int *a,int low,int high)
{
	int partitionIndex;
	if(low<high)
	{
		partitionIndex=partition(a,low,high);
		quicksort(a,low,partitionIndex-1);
		quicksort(a,partitionIndex+1,high);
	}	
}

int partition(int a[],int low,int high)
{
	int pivot=a[low];
	int i=low+1;
	int j=high;
	int temp;
	do
	{
		while(a[i]<=pivot)
		{
			i++;
		}
		while(a[j]>pivot)
		{
			j--;
		}
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		
	}while(i<j);
	
	temp=a[low];
	a[low]=a[j];
	a[j]=temp;
	return j;
}

int main()
{
	int a[]={2,5,7,6,4,9};
	int n=6;
	printf("\nUnsorted Array: ");
	printarray(a,n);
	quicksort(a,0,n-1);
	printf("\nRunning Quicksort\n");
	printf("\nSorted Array: ");
	printarray(a,n);
	return 0;
}
