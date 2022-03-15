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

void insertion_sort(int *a,int n)
{
	int i,j,key;
	for(i=1;i<=n-1;i++)
	{
	j=i-1;
	key=a[i];
	printf("Working on pass %d\n",i);
	while(a[j]>key && j>0)
	{
		a[j+1]=a[j];
		j--;
	}
	a[j+1]=key;	
	}
}
int main()
{
	int a[]={1,5,7,6,9,8};
	int n=6;
	printf("Before Sorting\n");
	printarray(a,n);
	insertion_sort(a,n);
	printf("After Sorting\n");
	printarray(a,n);
	return 0;
}
