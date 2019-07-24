#include <iostream>
using namespace std;
int main()
{
	int a[50],i,n,sum=0;
	cout<<"enter size of array";
	cin>>n;
	for (i=0;i<=n;i++)
	{
		cout<<"enter no of element";
		cin>>a[i];
	}
	for (i=0;i<=n;i++)
	{
		sum=sum+a[i];
	}
	cout<<sum;
	return 0;
	}

