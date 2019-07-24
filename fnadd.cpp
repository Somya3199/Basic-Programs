#include<iostream>
using namespace std;
int add(int,int);
int main()
{
 int a,b,c;
 cout<<"\nEnter two numbers";
 cin>>a>>b;
 c=add(a,b);
}
int add(int x,int y)
{ int z;
 z=x+y;
 cout<<z;
}
