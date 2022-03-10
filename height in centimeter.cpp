#include <stdio.h>
int main ()
{
	int h,inch;
	float centimeter;
	printf (" Enter the value of height in feet : ");
	scanf ("%d",&h);
	
	inch=h*12;
	centimeter=inch*h;
	printf ("\nThe value of height in inches is %d",inch);
	printf ("\nThe value of height in centimeter is %f",centimeter);
	
	return 0;
}
