#include<iostream>
using namespace std;
class Add
{
	public:
		void add(int a,int b)
		{
			cout<<"\naddition is:"<<a+b;
		}
    void add(float a,float b,float c)
		{
			cout<<"\naddition is:"<<a+b+c;
		}
};
int main()
{
	Add obj;
	obj.add(5,9);
	obj.add(2.5,6.8,8.3);
}
