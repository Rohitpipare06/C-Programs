#include<stdio.h>
int main()
{
	int arr[5],arr1[5],i,rev=0,rem;
	printf("\n Enter array elements : ");
	for(i=1;i<=4;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\n Array elements are : ");
	for(i=1;i<=5;i++)
	{
		printf("\n%d",arr[i]);
	}
	
	printf("\n The Reverse of array elements are : ");
	arr[5]=arr1[5];
	for(i=1;i<=5;i++)
	{
		rem=arr1[i]%10;
		arr1[i]/=10;
		rev=rev*10+arr1[i];
	}
	printf("\n%d",rev);
	return 0;
}
