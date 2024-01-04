// Swap two numbers using a temperory variable.
#include <iostream> 
using namespace std; 

int main() 
{ 
	int a = 2, b = 4, c; 

	c = a, a = b, b = c;
	cout << "a = " << a;
	cout << "\nb = " << b;
	 
	return 0; 
}
