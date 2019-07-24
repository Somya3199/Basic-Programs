#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"*****MENU*****";
	cout<<"\n Press R for Red car";
	cout<<"\n Press W for White car";
	cout<<"\n Press B for Blue car";
	cout<<"\n Press L for Black car";
	cout<<"Enter your choice";
	cin>>ch;
	switch(ch)
	{
		case 'R':
			{
				cout<<"\nU have booked a RED car";
				cout<<"\n Thank YOu";
				break;
			}
		case 'W':
			{
				cout<<"\nU have booked a WHITE car";
				cout<<"\n Thank YOu";
				break;
			}
		case 'B':
			{
				cout<<"\nU have booked a BLUE car";
				cout<<"\n Thank YOu";
				break;
			}
		case 'L':
			{
				cout<<"\nU have booked a Black car";
				cout<<"\n Thank YOu";
				break;
			}
		default:
			{
				cout<<"Sorry we are not vailable with any other color";
			}
	}
	return 0;
}
