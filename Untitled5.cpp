#include <iostream>
using namespace std;

class Test
{
   private:
      int a,b,c;

   public:
       void input(int x, int y, int z)
	   {
	   	a=x;
	   	b=y;
	   	c=z;
	   }

       Test operator++ () 
       { 
       		Test t;
          t.a=a++;
		  t.b=b++;
		  t.c=c++; 
		  return t;
       }
       void Display() 
	   {
	    cout<<"a: "<<a<<"\n";
		cout<<"b: "<<b<<"\n"; 
		cout<<"c: "<<c<<"\n";  
	}
};

int main()
{
    Test t,t1;
    t.input(8,9,7);
     t1=t++;  
    t.Display();
    t1.Display();
    return 0;
}
