#include <iostream>
using namespace std;
int main()
{
	int a[5][5], m , n;
	cout<<"enter the of rows\n";
	cin>>m;
	cout<<"enter the of columns\n";
	cin>>n;
	
	cout<<"Enter the values in array";
	for(int i=0; i<m;i++)
	{
		for(int j=0; j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"values of array are \n";
	for(int i=0; i<m;i++)
	{
		for(int j=0; j<n;j++)
		{
			cout<<a[i][j];
		}
		cout<<"\n";
	}
}
