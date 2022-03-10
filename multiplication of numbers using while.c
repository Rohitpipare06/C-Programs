#include<stdio.h>
int main()
{
	int mul=1,no,rem;
	printf("\n Enter any number : ");
	scanf("%d",&no);
	while(no>0){
		 rem=no%10;
		 mul=mul*rem;
	     no=no/10;
	}
	printf(" \n The multiplication of numbers entered by user is %d",mul);
	
	return 0;    
}
