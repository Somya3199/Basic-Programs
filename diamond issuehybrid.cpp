#include <iostream>
using namespace std;
class A
{
	
	public:
		
		void disp()
		{
			cout<<"Hello \n";
		}
		
};
class B: public virtual A 
{
	
	public:
		void dispB()
		{
			cout<<"class B \n";
		}
};
class C: virtual public A
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
	ob.disp();
	ob.dispB();
	ob.dispC();
	ob.dispD();
}
