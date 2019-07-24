#include <iostream>
using namespace std;
class A
{
	int a;
	public:
		void input()
		{
			a=90;
		}
		void display()
		{
			cout<<"a ="<<a;
		}
		
};
class B: private A
{
	int b;
	public:
		void in()
		
		{
			input();
			b=80;
		}
		void disp()
		{
			display();
			cout<<"b="<<b;
		}
};
int main()
{
	B ob;
	
	ob.in();
	
	ob.disp();
}
