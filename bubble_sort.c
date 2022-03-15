#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int *a, int n)
{
	int i,j,temp,isSorted;
	isSorted=0;
	for(i=0;i<n-1;i++)
	{
		printf("\nWorking on pass %d",i+1);
		isSorted=1;
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				isSorted=0;
			}
			
		}
		if(isSorted)
		return;
	}
}

void traversal(int *a,int n)
{
	int i;
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
}

int main()
{
	int a[]={1,2,3,4,6,5};
	int n=6;
	printf("Before Sorting\t");
	traversal(a,n);
	
	bubble_sort(a,n);
	traversal(a,n);
	return 0;
}
