#include<stdio.h>
int main()
{
	int arr[5],i;
	printf("\n Enter array elements : ");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\n Array elements are : ");
	for(i=1;i<=5;i++)
	{
		printf("\n%d",arr[i]);
	}
	
	
	return 0;
}
