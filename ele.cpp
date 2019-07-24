#include<iostream>
using namespace std;
int main()
{
	int arr[5],n,i;
	cout<<"enter the elements of array";
	for(i=1;i<=4;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter any element to search";
	cin>>n;
	if(i==n)
	{
		cout<<"element found";
	}
	else
	cout<<"element not found";
	return 0;
}
