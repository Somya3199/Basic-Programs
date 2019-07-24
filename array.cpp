#include<iostream>
using namespace std;
int main()
{
	int a[10]={1,1,1,1,1,1,1,1,1,1},n=0,f=0;
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the element you want to serach\n";
	cin>>n;
	
	for(int i=0;i<10;i++)
	{
		if(a[i]==n)
		{
			cout<<"Element found at "<<i+1<<"loaction\n";
		f++;
			
		}
		
		
	}
	
	if(f==0)
	{
		cout<<"\nElement not found";
	}
}
