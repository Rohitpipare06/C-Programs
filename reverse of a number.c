//print reverse of a number
#include<stdio.h>
int main()
{
	int rev,no,rem;
	printf("Enter number:");
	scanf("%d",&no);
	
	while(no>0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
		
	}
	printf("Reverse of a number is :%d",rev);
	return 0;
}
