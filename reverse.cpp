#include<iostream>
using namespace std;
int main()
{
	int n, rem,rev=0;
	cout<<"enter the number";
	cin>>n;
	while(n>0)
	{
		rem=n%10;
		n=n/10;
	cout<<rem;
	}

}
