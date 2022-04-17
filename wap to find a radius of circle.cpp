#include<iostream>
using namespace std;
const float PI=3.1452;
int main()
{
	int r;
	cout<<"\n Enter radius";
	cin>>r;
	float area=PI*r*r;  // dynamic/runtime initalization or late binding
	cout<<"\n Area="<< area;
	return 0;;
}
