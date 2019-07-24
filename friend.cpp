#include <iostream>
using namespace std;
class B;
class A
{
	int a;
	friend void abc(A o1, B o2);
};
class B
{
	int b;
	friend void abc(A o1, B o2);
};
void abc(A o1, B o2)
{
	cout<<"Enter values";
	cin>>o1.a>>o2.b;
	if(o1.a>o2.b)
	{
		cout<<"a is greater";
	}
	else if(o1.a<o2.b)
	{
		cout<<"b is greater";
	}
	else
	{
		cout<<"Both are equal";
	}
}
int main()
{
	A o1;
	B o2;
	abc(o1, o2);
}
