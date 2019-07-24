#include<iostream>
using namespace std;
class B;
class A
{
	int a;
	friend void abc(A obj1,B obj2);
};
class B 
{
	int b;
	friend void abc(A obj1,B obj2);
};
void abc(A obj1,B obj2)
{
 cout<<"Enter values";
 cin>>obj1.a>>obj2.b;
 if(obj1.a>obj2.b)
 cout<<"\na is greater";
 else if(obj1.a<obj2.b)
 cout<<"\nb is greater";	
 else
 cout<<"both are equal";
}
int main()
{
	A obj1;
	B obj2;
	abc(obj1,obj2);
}
