#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int T,N,j,i,si,ji,count=0;
	cout<<"Enter no. of submissions";
	cin>>N;
	cout<<"Enter total no. of Testcase";
	cin>>T;
	for(i=0;i<T;i++)
	{
		for(i=0;i<N;i++)
		{
			si+=i;
		}
		for(i=0;i<N;i++)
	{
		ji=si;
	}
		if(ji+si>=5)
		{
			count++;
		}
	    
	}
	cout<<"total Submissions which required judgement time greater than 5 mins"<<count;
};
