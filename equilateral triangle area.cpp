#include<iostream>
# include<cmath>
using namespace std;
int main()
{ float s,a,b,c,area;
cout<<"Enter a,b,c";
cin>>a>>b>>c;
s=(a+b+c)/2;
area=sqrt(s(s-a)(s-b)(s-c));
cout<<area;
}
