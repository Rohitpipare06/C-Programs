#include<stdio.h>
void mystrlwr(char*s);
int main()
{
	char ch[20];
	printf("\n Enter ant String : ");
	gets(ch);
	mtstrlwr(ch);
	printf("\n Lower Case String is : ");
	puts(ch);
	return 0;
}
void mystrlwr(char*s)
{
	while(*s!='\0')
	{
		*s=*s=32;
		s++;
	}
}
