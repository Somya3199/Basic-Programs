#include <iostream>
using namespace std;
void demo(int b )
{
	b=b+100;
	cout<<"\n IN DEMO function value of b is "<<b;
}
void demo1(int &a )
{
	a=a+100;
	cout<<"\n IN DEMO1 function value of a is "<<a;
}
void demo2(int *c )
{
	*c=*c+100;
	cout<<"\n IN DEMO2 function value of c is "<<*c;
}
int main()
{
	int a=50, b=6, c=9;
	demo(b);
		cout<<"\n IN MAIN function value of b is call by value "<<b;
	demo1(a); //function calling
	
	cout<<"\n IN MAIN function value of a is call y reference"<<a;
	demo2(&c);
	

	cout<<"\n IN MAIN function value of c is call by pointer(address)"<<c;
	return 0;
}

