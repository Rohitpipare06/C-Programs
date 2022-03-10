#include<stdio.h>

int main()
{
	int a,b,ch,res;
	printf("Enter Two Integers : ");
	scanf("%d%d",&a,&b);
	printf("\n Select any Choice : ");
	printf("\n 1. Add ");
	printf("\n 2. Sub ");
	printf("\n 3. Mul ");
	printf("\n 4. Div\n ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: res=a+b;
		        printf("\n The addition is %d",res);
	        	break;
	    case 2: res=a-b;
		        printf("\n The substaction is %d",res);
	        	break;
	    case 3: res=a*b;
		        printf("\n The multition is %d",res);
	        	break;
	    case 4: res=a/b;
		        printf("\n The divition is %d",res);
		        break;
	    default:printf("\nDefault");
	}
	 
    return 0;
}

