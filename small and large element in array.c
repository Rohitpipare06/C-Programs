#include<stdio.h>
int main()
{
	int arr[5]={2,1,3,5,9};
	int small,large,i;
	small=large=arr[0];
	
	for(i=1;i<=5;i++)
	{
		if(arr[i]<small)
		small=arr[i];
		if(arr[i]>large)
		large=arr[i];
	}
	
	printf("\n Small : %d\n Large : %d ",small,large);
	
	return 0;
}
