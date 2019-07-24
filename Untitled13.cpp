#include<iostream>

using namespace std;
int main()
{
	char choice;
	int a, b, c;
	cout<<"selction menu";
	cout<<"\n 1. addition";
	cout<<"\n 2. subtraction";
	cout<<"\n 3. multiplication";	
	cout<<"\n 4. division";
	cout<<"\n 5. modulus";
	cout<<"\n Enter ur choice";	
	cin>>choice;
	
	switch(choice)
	{
		case '+':
			{
				cout<<"Enter any two numbers";
				cin>>a>>b;
				c=a+b;
				cout<<"addition of "<<a <<" and "<<b<<" is "<<c;
				break;
			}
		case '-':
			{
				cout<<"Enter any two numbers";
				cin>>a>>b;
				c=a-b;
				cout<<"subtraction of "<<a <<" and "<<b<<" is "<<c;
				break;
			}
		case '*':
			{
				cout<<"Enter any two numbers";
				cin>>a>>b;
				c=a*b;
				cout<<"multiplication of "<<a <<" and "<<b<<" is "<<c;
				break;
			}
		case '/':
			{
				cout<<"Enter any two numbers";
				cin>>a>>b;
				c=a/b;
				cout<<"division of "<<a <<" and "<<b<<" is "<<c;
				break;
			}
		case '%':
			{
				cout<<"Enter any two numbers";
				cin>>a>>b;
				c=a%b;
				cout<<"modulus of "<<a <<" and "<<b<<" is "<<c;
				break;
			}
		default:
				cout<<"wrong choice";
				
	}

}
