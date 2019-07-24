#include<iostream>
using namespace std;
int main()
{
	int m;
	cout<<"Enter no of rows";
	cin>>m;
	for(int r=1;r<=m;r++)
	{
		for(int sp=m-1;sp>=r;sp--)
		{
			cout<<" ";
		}
		for(int c=1; c<=2*r-1;c++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
 } 
