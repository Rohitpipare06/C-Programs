#include <stdio.h>
int main ()
{
	int rollno,p1,p2,p3,p4,p5,total;
	float per;
	char name[10];
	printf (" Enter student name:");
	printf (" \nEnter roll no: ");
	printf (" \nEnter 5 paper marks : ");
	scanf ("%s%d%d%d%d%d%d",&name,&rollno,&p1,&p2,&p3,&p4,&p5);
	
	total=p1+p2+p3+p4+p5;
	per=total/5;
	
	printf ("\nThe student name is %s",name);
	printf ("\nThe roll no of student is %d",rollno);
	printf ("\nThe total marks of student is %d",total);
	printf ("\nThe percentage of student is %f",per);
	
	return 0;
}
