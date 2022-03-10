#include <stdio.h>
int main ()
{
	int rollno,p1,p2,p3,p4,p5,total;
	float per;
	char name[10];
	printf (" Enter student name, Rollno, 5 paper marks :");
	printf (" \n--------------------------------------------------");
	scanf ("%s%d%d%d%d%d%d",&name,&rollno,&p1,&p2,&p3,&p4,&p5);
	
	total=p1+p2+p3+p4+p5;
	per=total/5;
	
	printf (" \n--------------------------------------------------");
	printf ("\nThe student name is %s",name);
	printf (" \n--------------------------------------------------");
	printf ("\nrollno: %d",rollno);
	printf (" \n--------------------------------------------------");
	printf ("\ntotal marks: %d",total);
	printf (" \n--------------------------------------------------");
	printf ("\npercentage: %f",per);
	
	return 0;
}

