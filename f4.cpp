#include<iostream>
using namespace std;
int add (float, int);
int add(int x, int y)
{
	int z=x+y;
	return z;
}
int main()
{
	float a,b,c;
	cout<<"enter two numbers";
	cin>>a>>b;
	c=add(a,b);
	cout<<"addistion is"<<c;
}
