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
class C: public B
{
	
	public:
		void dispC()
		{
			cout<<"class C\n";
		}
};
int main()
{
	C ob;
	ob.dispA();
	ob.dispB();
	ob.dispC();
}
