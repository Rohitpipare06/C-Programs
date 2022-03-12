#include<stdio.h>
int main()
{
	int num,fact=1,n,i;
	printf("\n Enter a number ");
	scanf("%d",&n);
	num=n;
	if(n<0)
	
	printf("we can''t find factorial of negative number");
	else
	{
		for(i=1;i<=n;i++)
		{ 
		fact*=i;//fact=fact*i;
		
		}
	}
printf("\nfact=%d",fact);
return 0;	
	
}
