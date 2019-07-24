#include <iostream>
using namespace std;
int main()
{
	for (int r=1; r<=3;r++)
	{
		for (int s=2; s>=r;s--)
		{
			cout<<" ";
		}
		for(int c=1;c<=r;c++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
}
