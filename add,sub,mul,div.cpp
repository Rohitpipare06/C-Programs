#include <stdio.h>
int main ()
{
	
	int a,b,add,sub,mul,div;
	printf ("Enter two numbers: ");
	scanf ("%d%d",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	
	printf ("\nThe addition of %d and %d is %d",a,b,add);
	printf ("\nThe substraction of %d and %d is %d",a,b,sub);
	printf ("\nThe multiplication of %d and %d is %d",a,b,mul);
	printf ("\nThe division of %d and %d is %d",a,b,div);
	
	return 0;
}
