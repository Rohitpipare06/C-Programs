#include <stdio.h>
int main ()
{
	
	float l,b,h,volume;
	printf ("Enter the value of length,breath and height : ");
	scanf ("%f%f%f",&l,&b,&h);
	volume=l*b*h;
	
	printf ("\n The volume of rectangle is %f",volume);
	
	return 0;
}
