#include <iostream>
using namespace std;
class Complex
{
	private:
		int real;
		int img;
	public:
		void add(int a, int b)
		{
			cout<<"addition is"<<a+b;
		}
		void add(float a, float b,float c)
		{
			cout<<"addition is"<<a+b+c;
		}
};
int main()
{
	Complex c;
	c.add(2,3);
	c.add(2.5,3.5,2.3);
}
