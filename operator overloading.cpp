#include <iostream>
using namespace std;

class Check
{
    private:
       int i;
    public:
       void input(int item)
       {
       	i=item;
	   }
       void operator ++() 
          { ++i; }
       void Display() 
          { cout << "i=" << i << endl; }
};

int main()
{
    Check obj;
	obj.input(89);
    // Displays the value of data member i for object obj
    obj.Display();

    // Invokes operator function void operator ++( )
    ++obj; 
  
    // Displays the value of data member i for object obj
    obj.Display();

    return 0;
}

