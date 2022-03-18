#include<stdio.h>
int main()
{
	int i,j;
	for (i=1,j=10;i<j;++i,--j)
	{
		if(i==3)
		{
		continue;
		}
		printf("\n%d %d",i,j);
		
	}
	return 0;
}

