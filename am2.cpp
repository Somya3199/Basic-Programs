#include<iostream>
using namespace std;
int main()
{
	int row,column,space,n;
	cout<<"Enter the number of lines:";
	cin>>n;
	cout<<"\n";
	for(row=0;row<n;row++)
	{
		for(space=n-1;space>row;space--)
		  cout<<" ";
		for(column=1;column<=(2*row)+1;column++)
		  cout<<"*"  ;
		cout<<"\n"  ;
		  
	}
}
