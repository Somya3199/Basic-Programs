#include <iostream>
using namespace std;
int main()
{
	int a[5];
	int max, smax;
cout<<"enter the elements";
for(int i=0;i<5;i++)
cin>>a[i];
if(a[0]>a[1])
{
	max=a[0];
	smax=a[1];
}
else
{
	max=a[1];
	smax=a[0];
}
for(int i=2;i<5;i++)
{
	if(a[i]>=max)
	{
		smax=max;
		max=a[i];
	}
	else if(a[i]>smax)
	{
		smax=a[i];
	}
}
cout<<max<<"\t"<<smax;
}

