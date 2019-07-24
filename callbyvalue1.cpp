#include <iostream>
using namespace std;
void swap (int a, int b)
{
	int t=a;
	a=b;
	b=t;
}
int main()
{
	int a, b;
	cout<<"enter two numbers to swap\n";
	cin>>a>>b;
	cout<<"value before swapping \n";
	cout<<"a="<<a<<"\n b="<<b;
	swap(a,b);
	cout<<"value after swapping \n";
	cout<<"a="<<a<<"\n b="<<b;
	
}
