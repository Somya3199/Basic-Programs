#include<iostream>
using namespace std;
int main()
{ int sum=0,n;
 cout<<"Enter the numbers";
 do
 {
 cin>>n;
  sum+=n;
 }
 while(n!=0);
 cout<<sum;
}
