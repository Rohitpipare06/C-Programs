//Sum of digit of any number
#include <stdio.h>
int main()
{
	int ;
	printf("\n Enter any number:");
	 scanf("%d",&n);
	 num=n;
	 if (n<0)
	 printf("We cannot find the factorial of negative number");
	 else
	 {
	 	for(i=1;i<=n;i++)
	 	{
	 		fact=fact*i;
		 }
	 }
	 printf("\nfact = %d",fact);
	 return 0;
}


