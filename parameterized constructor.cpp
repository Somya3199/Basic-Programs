#include<iostream>
using namespace std;
class Compare
{
 int a,b;
 public:
  Compare(int x,int y)
 	{
 		a=x;
 		b=y;
	 }
	 void max();
};
void Compare::max()
{
	if(a>b)
	cout<<a<<"\tis maximum";
	else
	cout<<b<<"is maximum";
}

int main()
{
	Compare c(100,80);
	c.max();
}
