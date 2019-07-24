#include<iostream>
using namespace std;
int main()
{
 int i,n,rem,sum=0;
 cout<<"enter the number";
 cin>>n;
 cout<<"length of number="<<"lengthfunction"<<"\n";
 int f=n;
 for(i=0;i<3;i++)
 {
  rem=n%10;
  n/=10;
  sum+=rem*rem*rem;
 }
 cout<<sum;
 if(sum==f)
 cout<<"armstrong no.";
 else
 cout<<"not an armstrong no.";
return 0;
}
