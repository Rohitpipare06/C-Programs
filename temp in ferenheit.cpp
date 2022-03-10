#include <stdio.h>
int main ()
{
	
	float F,c;
	printf ("Enter the value of temperature in centigrade: ");
	scanf ("%f",&c);
	F=1.8*c+32;
	
	printf ("\n The  value of temperature in Ferenheit is %f",F);
	
	return 0;
}
