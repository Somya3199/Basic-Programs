#include<iostream>
using namesapce std;
int main()
{
	int a;
	int *p;
	a=100;
	p=&a;
	cout<<"\n value of a is"<<a;
	cout<<"\n address of a is"<<&a;
	cout<<"\n value of p is"<<p;
	cout<<"\n value of a through p is"<<*p;
}
