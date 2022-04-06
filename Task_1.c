#include<stdio.h>
int main()
{
	int i,n=0,n1=0,arr[20]={1,3,2,2,4,5,8,8,2,2,7,7,7,1,1,1};
	printf("\n Array elements are : ");
	for(i=0;i<=15;i++)
	{
		printf(" [%d] ",arr[i]);
	}
	
	for(i=0;i<=15;i++)
	{
		if(arr[i]==arr[i+1])
		{
			if(arr[i]!=arr[i+2] && arr[i]!=arr[i-1])
			n++;
			
			if(arr[i]==arr[i+2])
			n1++;
		}
	}
	printf("\n pair of two are %d ",n);
	printf("\n pair of three are %d ",n1);
	printf("\n add of %d + %d = %d",n,n1,n+n1);
	return 0;
}
