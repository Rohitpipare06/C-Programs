#include<stdio.h>
int main()
{
	int i,j,sum=0,n=0;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(i%2==0)
			printf("%d",1);
			else
			printf("%d",0);
			
		}
		printf("\n");
		
	}
	return 0;
}
