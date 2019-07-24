#include<iostream>
using namespace std;
int main()
{
	int n, first=0, second=1,third;
	cout<<"enter the lmit";
	cin>>n;
	int i=0;
	while(i<n)
	{
		cout<<first<<"\t";
		
		third=first+second;
		first=second;
		second=third;
		n--;
	}
}
