#include<stdio.h>
void copy_string(char*,char*);
int main()
{
    char s1[10],s2[10];
    printf("Enter s1 string\n");    
    gets(s1);    
    copy_string(s2,s1);    
    printf("s2 string is %s ",s2);    
    return 0;
}

void copy_string(char*s2,char*s1)
{
    while(*s1)
    {
        *s2=*s1;        
        s1++;
        s2++;
    }    
    *s2='\0';
}
