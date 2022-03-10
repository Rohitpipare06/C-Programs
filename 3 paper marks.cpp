#include <stdio.h>
int main ()
{
	
	int p1,p2,p3,total;
	float per;
	printf ("Enter the 3 paper marks p1,p2 and p3: ");
	scanf ("%d%d%d",&p1,&p2,&p3);
	total=p1+p2+p3;
	per=total/3;
	
	printf ("\nThe total of 3 paper marks  is %d",total);
	printf ("\nThe percentage of 3 paper marks  is %f",per);
	
	return 0;
}
