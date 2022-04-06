#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10],str2[10];
	printf(" \n Enter first String \n");
	scanf("%s",&str1);
	printf(" \n Enter second String \n");
	scanf("%s",&str2);
	
	if(strcat(str1,str2))
	printf("\n The result is \n %s ",str1,str2);
	
	return 0;
}

