#include <iostream>
using namespace std;
int add ();
int add()
{
	int x, y;
	cout<<"enter two numbers";
	cin>>x>>y;
	int z=x+y;
	return z;
}
int main()
{
	int a, b,c;
	
	c=add();
	cout<<c;
}
