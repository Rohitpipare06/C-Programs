#include <stdio.h>
int main ()
{
	
	float BS,GS,TA,DA,HRA;
	printf ("Enter the Basic Salary: ");
	scanf ("%f",&BS);
	HRA=0.60*BS;
	TA=0.40*BS;
	DA=0.50*BS;
	GS=BS+TA+DA+HRA;
	
	printf ("\nThe Gross Salary is %.3f %f",GS);
	
	return 0;
}
