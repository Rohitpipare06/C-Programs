#include<stdio.h>
int main()
{
	int n=65,i,j;
	for(i=1;i<=4;++i)
	{
		for(j=1;j<=4;++j)
		{
			printf(" %c ",n);
			n++;
		}
		printf("\n");
	}
	
	return 0;
}

