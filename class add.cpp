#include<iostream>
using namespace std;
class Add
{
 	int a,b;
 	public:
 		void input()
 		{
 			cout<<"\nEnter two numbers";
 			cin>>a>>b;
		 }
		 void add()
		 {
		 	int c=a+b;
		 	cout<<c;
		 }
};
int main()
{
 Add obj;
 obj.input();
 obj.add();
}
