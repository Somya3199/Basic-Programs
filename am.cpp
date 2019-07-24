#include<iostream>
using namespace std;
int main()

{
	int row,column,space,n;
	cout<<"Enter the number of lines:";
	cin>>n;
	cout<<"\n";
	for(row=1;row<=n;row++)
	{
		for(space=n-1;space>=row;space--)
		  cout<<" ";
		for(column=1;column<=row;column++)
		  cout<<"*"  ;
		cout<<"\n"  ;
		  
	}
	retun 0;
}
