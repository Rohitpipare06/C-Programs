#include <stdio.h>
#define PI 3.1452
int main ()
{
	
	float r,h,volume;
	printf ("Enter the value of radius and height : ");
	scanf ("%f%f",&r,&h);
	volume=PI*r*r*h;
	
	printf ("\n The volume of Cylinder is %f",volume);
	
	return 0;
}
