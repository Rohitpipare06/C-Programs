#include<stdio.h>
void mystrupr(char*s);
int main()
{
	char ch[20];
	printf("\n Enter any String : ");
	gets(ch);
	mtstrupr(ch);
	printf("\n Upper Case String is : %s ",ch);
	return 0;
}
void mystrlwr(char*s)
{
	while(*s!='\0')
	{
		*s=*s+32;
		s++;
	}
}
