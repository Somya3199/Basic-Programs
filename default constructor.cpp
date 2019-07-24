#include<iostream>
using namespace std;
class Sum
{
	int a,b;
	public:
		Sum()
		{
			a=50;
			b=100;
		}
		void print();
};
void Sum::print()
{
	cout<<a+b;
}
int main()
{
	Sum s;
	s.print();
}
