#include <iostream>
using namespace std;
int main()
{
	int a[50][50],b[50][50],i,j,r,c,sum[50][50];
	cout<<"enter the number of rows";
	cin>>r;
	cout<<"enter the number of coloumn";
	cin>>c;
	
	for (i=0;i<r;i++)
	for (j=0;j<c;j++)
	{
		cout<<"enter first array element";
		cin>>a[i][j];
	}
	for (i=0;i<r;i++)
	for (j=0;j<c;j++)
	{
		cout<<"enter the second array element";
		cin>>b[i][j];
	}
	for (i=0;i<r;i++)
	for (j=0;j<c;j++)
	{
		sum[i][j]=a[i][j]+b[i][j];
		cout<<  sum[i][j];
	}
	return 0;
}
