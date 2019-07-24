#include <iostream>
using namespace std;
int main()
{
	int a[50],i,n;
	cout<<"enter the size of array";
	cin>>n;
	for (i=0;i<n;i++)
	{
		cout<<"enter the element";
		cin>>a[i];
	}
    int	max=a[0];
	for (i=0;i<n;i++)
	{
		if (max<a[i])
		{
			max=a[i];
		}
	}
	cout<<"maximun is "<<max;
    int	min=a[0];
	for (i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
cout<<"\n minimum number is "<<min;
return 0;	
	
}
