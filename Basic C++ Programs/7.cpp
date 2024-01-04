// Find the size of int, char, float and double data types
#include <iostream> 
using namespace std; 

int main() 
{ 
	int integerType; 
	char charType; 
	float floatType; 
	double doubleType; 

	cout << "Size of int is: " << sizeof(integerType); 

	cout << "\nSize of char is: " << sizeof(charType);

	cout << "\nSize of float is: " << sizeof(floatType); 

	cout << "\nSize of double is: " << sizeof(doubleType); 

	return 0; 
}
