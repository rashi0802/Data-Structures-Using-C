#include<stdio.h>

int main(){
	int arr[10],n,index,element,i,j,k;
	printf("Enter size of the array\n");
	scanf("%d",&n);
	
	printf("Enter array elements\n");
	for(j=0;j<n;j++)
	{
		scanf("%d",&arr[j]);
	}
	//insertion
	printf("Enter element to be inserted\n");
	scanf("%d",&element);
	printf("Enter index where element is to be inserted\n");
	scanf("%d",&index);
	
	if(n>=10)
	{
		return -1;
	}
	for(i=n-1;i>=index;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[index]=element;
	
	//traversal
	for(k=0;k<n+1;k++)
	{
		printf("%d ",arr[k]);
	}
	return 0;
}
