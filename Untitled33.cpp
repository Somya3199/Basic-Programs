# include<iostream>
using namespace std;
class addition
{
	public:
		void add( int a,int b)
		{
			cout<<"addition"<<a+b;
		}
		void add(int a,int b,int c)
	{
		cout<<"addition"<<a+b+c;
	}
		
};
int main()
{
	addition a;
	a.add(5,4);
	a.add(5,4,6);
	}

