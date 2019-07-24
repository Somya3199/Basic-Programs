#include <iostream>
using namespace std;
void add (int, int);
void add(int x, int y)
{
	int z=x+y;
	cout<<z;
}
int main()
{
	int a, b;
	cout<<"enter two numbers";
	cin>>a>>b;
	add(a,b);
}
