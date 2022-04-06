#include<stdio.h>
int main()
{
	int arr[100],i,n;
	printf("\n Enter size of Array : ");
	scanf("%d",&n);
	printf("\n Enter Array elements : ");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\n Array elements are : ");
	for(i=1;i<=n;i++)
	{
		printf(" [%d] ",arr[i]);
	}
	
	
	return 0;
}
