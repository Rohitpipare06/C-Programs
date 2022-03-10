#include <stdio.h>
int main()
{
    int n, mul, firstDigit, lastDigit;
    printf("Enter 9 digit number to find multiplication of first and last digit = ");
    scanf("%d", &n);
    
    lastDigit = n%10;
    while(n >= 10)
    {
        n = n / 10;
    }
    firstDigit = n;
    
    mul = firstDigit * lastDigit;
    
    printf("\nmultiplication of first and last digit = %d", mul);
    return 0;
}

