#include <iostream>
using namespace std;
int main()
{
	int arr[5];
	int max, second_max;
cout<<"enter the elements";
for(int i=0;i<5;i++)
cin>>arr[i];
	if(arr[0] > arr[1]) 
	{
 		second_max = arr[1];
 		max = arr[0];
	} 
	else 
	{
 		second_max = arr[0];
 		max = arr[1];
	}
	for(int i = 2; i < 5; i++)
	{
    
    	if(arr[i] >= max)
		{  
        	second_max=max;
        	max=arr[i];          
    	}
    	else if(arr[i] > second_max)
		{
        	second_max=arr[i];
    	}
	}
	cout<<"\nlargest element is "<<max;
	cout<<"\nsecond largest element is "<<second_max;
}
