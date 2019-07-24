#include <iostream>
using namespace std;
class A
{
	
	public:
		
		void dispA()
		{
			cout<<"class A \n";
		}
		
};
class B: public A 
{
	
	public:
		void dispB()
		{
			cout<<"class B \n";
		}
};
class C
{
	
	public:
		void dispC()
		{
			cout<<"class C\n";
		}
};
class D: public B, public C
{
	
	public:
		void dispD()
		{
			cout<<"class D\n";
		}
};
int main()
{
	D ob;
	ob.dispA();
	ob.dispB();
	ob.dispC();
	ob.dispD();
}
