//Series program
#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,x,n;
	float sum=1;
	printf("\n Enter number of series and value");
	scanf("%d%d",&n,&x);
	for(i=2;i<=n;i++);
	{
		sum=sum+(float)pow(x,i)/i;
	}
	printf("\nSum=%f",sum);
	return 0;
	
}
