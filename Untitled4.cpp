#include<iostream>
using namespace std;
int main()
{
	int i,a[5],max=0;
	for(i=0;i<5;i++)
	{
	    cout<<"enter array elements";
		cin>>a[i];
	}
    
	for(i=0;i<5;i++)
    {
    	if(a[i]>max)
    	max=a[i];
	}
    cout<<"largest value is "<<max;
}
