#include<stdio.h>
int main()
{
	int arr[5];
	printf("\n Enter array elements : ");
	scanf("%d",&arr[0]);
	scanf("%d",&arr[1]);
	scanf("%d",&arr[2]);
	scanf("%d",&arr[3]);
	scanf("%d",&arr[4]);
	printf("\n Array elements are : ");
	printf("   [%d]   ",arr[0]);
	printf("   [%d]   ",arr[1]);
	printf("   [%d]   ",arr[2]);
	printf("   [%d]   ",arr[3]);
	printf("   [%d]   ",arr[4]);
	printf("\n Their address are  : ");
	printf("[%d] ",&arr[0]);
	printf("[%d] ",&arr[1]);
	printf("[%d] ",&arr[2]);
	printf("[%d] ",&arr[3]);
	printf("[%d] ",&arr[4]);
	
	return 0;
}
