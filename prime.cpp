#include<iostream>
using namespace std;

int main()
{
	int num,i,t=0;
	cout<<"enter num ";
	cin>>num;
	for(i=0;i<=num/2;i++)
{
	if(num%i==0)
	t=1;
	
}
if(t==1)
cout<<"\n num is not prime num";
else
cout<<"\n num is  prime num";
return 0;
	}
