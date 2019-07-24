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
int main()
{
	B ob;
	ob.dispA();
	ob.dispB();
	
}
