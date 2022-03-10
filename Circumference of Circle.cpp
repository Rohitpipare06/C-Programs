#include <stdio.h>
#define PI 3.1452
int main ()
{
	
	float r,C;
	printf ("Enter the value of radius: ");
	scanf ("%f",&r);
	C=2*PI*r;
	
	printf ("\n The circumference of circle is %f",C);
	
	return 0;
}
