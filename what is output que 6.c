#include<stdio.h>
int main()
{
	int i,sum=0;
	printf("Enter number i :- ");
	scanf("\n%d",&i);
	for (i;i<99;i=i+3)
	{
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;
}

