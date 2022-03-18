#include<stdio.h>
int main()
{
	int i,j;
	printf("Enter number i");
	scanf("%d",&i);
	printf("Enter number j");
	scanf("\n%d",&j);
	for (i,j;i<j;++i,--j)
	{
		if(i==3)
		{
		continue;
		}
		printf("\n%d %d",i,j);
		
	}
	return 0;
}

