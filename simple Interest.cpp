#include <stdio.h>
int main ()
{
	
	float P,R,T,SI;
	printf ("Enter the value of P,R and T: ");
	scanf ("%f%f%f",&P,&R,&T);
	SI=(P*R*T)/100;
	
	printf ("\nThe Simple Interest is %.3f",SI);
	
	return 0;
}
