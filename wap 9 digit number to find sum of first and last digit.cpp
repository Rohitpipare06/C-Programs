//wap to find the sum of 1st and last digit of 9 digit number 
#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n, sum, firstDigit, lastDigit;
    cout<<"Enter 9 digit number to find sum of first and last digit = ";
    cin>>n;
    
    lastDigit = n%10;
    while(n >= 10)
    {
        n = n / 10;
    }
    firstDigit = n;
    
    sum = firstDigit + lastDigit;
    
    cout<<"Sum of first and last digit = "<<sum;
    
    return 0;
}

