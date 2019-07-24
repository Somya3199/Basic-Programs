#include<iostream>

 using namespace std;
int main()
{
  int sum=0, N;
  
 
  cout<<"Enter array size\n";
  cin>>N;
 
  int *a = new int[N];
  cout<<"\nEnter "<<N<<" integer numbers"<<endl;
  for(int i=0; i<N; i++)
   cin>>a[i];
 
   cout<<"Input array is.."<<endl;
   for(int i=0; i<N; i++)
   {
    cout<<a[i]<<endl;
    sum = sum + a[i]; // sum += a[i];
   }
   cout<<"Total Sum: "<<sum;
 
   delete(a);
   
}
