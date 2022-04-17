#include<iostream>
using namespace std;
int main()
{
	int x=10;                   // ref is reference to x.
	int &ref=x;
	ref=20;                    //value of x is now change to 20
	cout<<"x="<<x<<endl;
	x=30;                     //value of x is now changed to 30
	cout<<"ref ="<<ref<<endl;
	return 0;
}
