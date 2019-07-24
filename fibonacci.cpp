#include<iostream>
using namespace std;
int main()
{
	int first,second,third,n,i=0;
	first=-1;
	second=1;
	cout<<"enter the limit n";
	cin>>n;
	while(i<n)
	{

	third=first+second;
	first=second;
	second=third;
	cout<<third<<"\n";
    	n--;
}
}
