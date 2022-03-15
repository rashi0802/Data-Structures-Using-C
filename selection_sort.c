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

void selection_sort(int *a,int n)
{
	printf("\nApplying Selection Sort\n");
	int minindex,j,i,temp;
	
	for(i=0;i<n-1;i++)
	{
		printf("Running pass %d:  ",i+1);
		printarray(a,n);
		printf("\n");
		minindex=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[minindex])
			minindex=j;
		}
		temp=a[minindex];
		a[minindex]=a[i];
		a[i]=temp;
	}
}

int main()
{
	int a[]={3,4,2,7,5,0};
	int n=6;
	printarray(a,n);
	selection_sort(a,n);
	printarray(a,n);
	return 0;
}
