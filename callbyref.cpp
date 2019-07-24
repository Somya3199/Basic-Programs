#include<iostream>
using namespace std;
int a;
int increase(int &x)
{
	x=x+100;
	cout<<"\nvalue of a in increase function is"<<x;
	return x;
}
int main()
{
	//int a;
	cout<<"enter the value of a";
	cin>>a;
	int res=increase(a);
	cout<<"\nvalue of a in main function is"<<a;
	cout<<"\nvalue of result is"<<res;
}
