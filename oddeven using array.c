//find odd & even using array
#include<stdio.h>
int main()
{
	int arr[10],i,even=0,odd=0;
	for(i=1;i<=10;i++)
	{
		printf("\nEnter value for arr[%d]:",i);
		scanf("\n%d",&arr[i]);
		{
			if(arr[i]%2==0)
			even++;
			else
			odd++;
		}
		printf("\nEven=%d and Odd=%d",even,odd);
	}
	return 0;
}
