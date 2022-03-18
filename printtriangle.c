//wap to print pyramid
#include<stdio.h>
int main()
{
	int a,k,i,j;
	printf("enter the rows:\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=a;j>i;j--)
		{
			printf("*");
		}
			for(k=0;k<i;k++)
		{
			printf(" ");
		}
		printf("\n");
	}
}
