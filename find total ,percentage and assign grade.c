# include<stdio.h>
int main()
{
	float S1,S2,S3,S4,total,per;
	char grade;
	printf("Enter mark of subject");
	scanf("%f%f%f%f",&S1,&S2,&S3,&S4);
	total=S1+S2+S3+S4;
	per=total/4.0;
	    if(per>=90)
	               grade='A';
	    else if(per>=80)
		           grade='B';
		else if(per>=70)
		           grade='C';
		else if(per>=60)
		           grade='D';
		else if(per>=40)
		           grade='E';
		else       
		           grade='Fail';
	printf("percentage of %f,Grade is %c,\n",per,grade);
	return 0;	           
}
