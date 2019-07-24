#include<iostream>
using namespace std;

int main ()
{
	
int num1,num2,num3;
	
	
cout<<"ntr num1 ";
cin>>num1;
cout<<"\nntr num2 ";
cin>>num2;
cout<<"\nntr num3 ";
cin>>num3;
if (num1>num2 && num1>num3)
cout<<"\nnum1 is greather ";
else if(num2>num3)
cout<<"\nnum2 is greather";
else
cout<<"\nnum3 is greather";
return 0;
}
