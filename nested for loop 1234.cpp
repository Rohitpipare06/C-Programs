#include<stdio.h>
int main()
{
	int n=1,i,j;
	for(i=1;i<=4;++i)
	{
		for(j=1;j<=4;++j)
		{
			printf(" %d\t",n);
			n++;
		}
		printf("\n");
	}
	
	return 0;
}
