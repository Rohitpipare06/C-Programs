#include<stdio.h>
int main()
{
	int sum=0,num,rem;
	printf("\n Enter any number : ");
	scanf("%d",&num);
	while(num>0){
		 rem=num%10;
		 sum=sum+rem;
	     num=num/10;
	}
	printf(" \n The sum of digits entered by user is %d",sum);
	
	return 0;    
}

