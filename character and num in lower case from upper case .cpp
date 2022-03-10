#include <stdio.h>
int main()
{
	char ch;
	printf("Enter character in upper case : ");
	scanf("%c",&ch);
	ch=ch+32;
	
    printf("\nValue of character in lower case is %c",ch);
    printf("\nValue of number in lower case is %d",ch);
    
    return 0;
}

