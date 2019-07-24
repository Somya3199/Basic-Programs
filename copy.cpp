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
		Complex (Complex &c)
		{
			real=c.real;
			img=c.img;
		}
		~Complex()
		{
			cout<<real<<"+"<<img<<"i"<<"\n";
		}
};
int main()
{
	Complex c;
	Complex c1 (9,8);
	Complex c3(c1);
	
}

