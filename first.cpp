#include<iostream>
using namespace std;
void increment(int &a)
{
	a++;
}
int main()
{
	int a=5;
	int * p;//holds some garbage value
	int& p1=a;
	cout<<p<<"\n";
	p=NULL;// holds address 0
	cout<<p<<"\n";
	p=&a;//holds adress of a
	cout<<p<<"\n";
	cout<<"value of a is "<<a<<"\n";
cout<<"value of a is "<<*p<<"\n";
	increment(a);
	cout<<"value of a is "<<a<<"\n";	
	}
