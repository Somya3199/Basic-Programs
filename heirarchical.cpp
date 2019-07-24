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
class C: public A
{
	
	public:
		void dispC()
		{
			cout<<"class C\n";
		}
};
int main()
{
	C ob1;
	B ob2;
	ob1.dispA();
	ob1.dispC();
	ob2.dispA();
	ob2.dispB();
}
