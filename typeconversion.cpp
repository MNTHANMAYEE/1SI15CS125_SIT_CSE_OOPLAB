#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,b;
	float y=4.0f/3;
	a=y;
	b=static_cast<int>(y);
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<y<<endl;
	cout<<round(1.2)<<endl;
	cout<<round(1.5)<<endl;
	cout<<round(1.7)<<endl;
	return 0;
	
}
