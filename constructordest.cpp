#include <iostream>
using namespace std;
class Complex
{
	int real;
	int img;
	public:
		Complex()
		{
			real=10;
			img=10;
		}
		Complex(int r, int i)
		{
			real=r;
			img=i;
		}
		void display()
		{
			cout<<real<<"+"<<img<<"i"<<"\n";
		}
		~Complex()
		{
			cout<<"memory is freed \n";
		}
};
int main()
{
	Complex c;
	Complex c1 (9,8);
	c.display();
	c1.display();
	
}

