#include<stdio.h>
int main()
{
	int num1,num2,num3,biggernum;
	printf("Enter three numbers : ");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2)
	{
		if(num1>num3)
		biggernum=num1;
		else
		biggernum=num3;
	}
	else{
		if(num2>num3)
		biggernum=num2;
		else
		biggernum=num3;
	}
	printf("Biggest number is %d\n",biggernum);
	return 0;
}
