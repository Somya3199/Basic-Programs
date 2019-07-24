#include<iostream>
using namespace std;
int main()
{
	char c='A';
	int n;
	cout<<"Enter the number of lines:";
	cin>>n;
	cout<<"\n";
	for(int row=1;row<=n;row++)
	{
		for(int column=1;column<=row;column++)
		{
			
		   cout<<c;
		   c++;
	    }
		c='A';
		cout<<"\n"  ;  
	}
}
