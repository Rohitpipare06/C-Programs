#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,total;
	float per;
	cout<<"\nEnter Value of a,b,c";

	cin>>a>>b>>c;
	total=a+b+c;
	per=total/3;
	
	cout<<"\n The total of 3 paper marks  is "<<total;
	cout<<"\n The percentage of 3 paper marks is"<<per;
	return 0;
}
