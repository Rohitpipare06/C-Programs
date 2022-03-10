#include <stdio.h>
int main()
{
	int a,b,emp;
	printf ("Enter two numbers: ");
	scanf ("%d%d",&a,&b);
	printf ("\nBefore Swaping a is %d and b is %d",a,b);
	emp=a;
	a=b;
	b=emp;
	
	printf ("\nAfter Swaping a is %d and b is %d",a,b);
	
	return 0;
}
