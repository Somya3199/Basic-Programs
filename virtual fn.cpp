#include<iostream>
using namespace std;
class A
{
	public:
	   virtual void display()
		{
			cout<<"class A\n";
		}
};
class B:public A
{
	public:
	    void display()
		{
			cout<<"class B\n";
		}
};
int main()
{
	B ob;
	A *ptr;
	ptr=&ob;
	ob.display();
	ptr->display();
}

