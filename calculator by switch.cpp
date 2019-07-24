#include<iostream>
using namespace std;
int main()
{int a,b,c,n;char f;
l: cout<<"Enter two numbers";
 cin>>a>>b;
 cout<<".........Menu.........";
 cout<<"\n Press 1. for Addition";
 cout<<"\n Press 2. for Substraction";
 cout<<"\n Press 3. for Multiplication";
 cout<<"\n Press 4. for Division";
 cout<<"\n Press 5. for Modulus";
 cout<<"\n Press 6. for exit";
 cout<<"\n Enter your choice";
 cin>>n;
 switch(n)
 {
  case 1:
  	c=a+b;
    cout<<c;
  	break;
  case 2:
  	c=a-b;
  	cout<<c;
  	break;
  case 3:
  	c=a*b;
  	cout<<c;
  	break;
  case 4:
  	c=a/b;
  	cout<<c;
  	break;
  case 5:
  	c=a%b;
  	cout<<c;
  	break;
  case 6:
  	exit;
  	break;
  default:
    cout<<"Wrong choice";
 }
  
}

