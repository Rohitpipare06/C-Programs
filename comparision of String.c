#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10],str2[10];
	printf(" Enter first String \n");
	scanf("%s",&str1);
	printf(" Enter second String \n");
	scanf("%s",&str2);
	
	if(strcmp(str1,str2)==0)
	printf("\n Equal",str1);
	else
	printf("\n Not Equal",str2);
	
	return 0;
}

