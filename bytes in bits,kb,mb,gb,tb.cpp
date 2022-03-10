#include <stdio.h>
int main ()
{
	double bytes,bit,kb,mb,gb,tb;
	printf (" Enter bytes : ");
	scanf ("%lf",&bytes);
	
	bit=bytes*8;
	kb=bytes/1024;
	mb=kb/1024;
	gb=mb/1024;
	tb=gb/1024;
	
	printf ("\nThe value of bytes in bits is %.0lf",bit);
	printf ("\nThe value of bytes in kb is %.0lf",kb);
	printf ("\nThe value of bytes in mb is %.0lf",mb);
	printf ("\nThe value of bytes in gb is %.0lf",gb);
	printf ("\nThe value of bytes in tb is %.0lf",tb);
	
	return 0;
}
