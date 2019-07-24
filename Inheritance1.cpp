#include<iostream>
using namespace std;
class A
{
	private:
		int b;
	private:
		int a;
	public:
		void input()
		{
			a=65,b=98;
		}
		void display()
		{
			cout<<"\nValue of a and b in base class";
			cout<<"\na="<<a<<"\tb="<<b<<"\n";
		}
	};
	class B:private A
	{
		private:
			int b;
		public:
			void in()
			{
				input();
				b=80;
			}
	void disp()
	{
		display();
		cout<<"\nValue of a and b in derived class";
		cout<<"\na="<<a<<"\tb="<<b<<"\n";
	}
};
int main()
{
	B ob;
	ob.in();
	ob.display();
}
