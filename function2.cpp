#include <iostream>
using namespace std;
int add(int a, int b)//function definition
{
	int c=a+b;
	return c;
}
int main()
{
	int res=add(4.5,5); //function calling
	cout<<"result is "<<res;
	return 0;
}


