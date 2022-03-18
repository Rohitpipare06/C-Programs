//add element of array
#include<stdio.h>
int main()
{
	int arr[100],i,n,sum=0;
	
	printf("\n Enter size of array: ");
	
	scanf("%d",&n);
	
	printf("\n Enter array elements:");
	
	for(i=0;i<n;++i)
	
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("\nSum of array elements are:%d",sum);
	return 0;
}
