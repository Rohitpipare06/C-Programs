// Print abc in matrix
#include<stdio.h>
int main()
{
	int n=64,i,j;
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=5;++j)
		{
			printf("%4c",++n);
		}
		printf("\n");
	}
	return 0;
}
