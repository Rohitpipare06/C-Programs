#include <stdio.h>
int main()
{
    char s1[10],s2[10];
    printf("\nEnter the first string: ");
    gets(s1);
    printf("\nEnter the second string to be concatenated: ");
    gets(s2);
    char *a=s1;
    char *b=s2;
    while(*a)
    {
        a++;
    }
    while(*b)
    {
        *a=*b;
        b++;
        a++;
    }
    *a='\0';
    printf("\nThe string after concatenation is: %s ", s1);
    return 0;
}
