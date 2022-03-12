#include<stdio.h>
int main()
{
	int n,i;
	printf("\nEnter Range ");
	scanf("%d",&n);
	for (i=n; i>=1; i=i-2)
	{
		printf("\n %d",i);
	}
	return 0;
}
