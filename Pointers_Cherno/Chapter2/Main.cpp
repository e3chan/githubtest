#include <iostream>
using namespace std;

int main() {
	
	int ival = 1024;
	int& refval = ival;

	cout << &ival << endl; //Memory address
	cout << &refval << endl; // Same memory address as above
	cout << refval << endl; //1024

	refval = 2048; 

	cout << ival << endl; //2048

	int* p = &ival;

	cout << p << endl; //00AFF9F8 --> p is the memory address
	cout << *p << endl; //2048  --> * dereferneces it

	*p = 5000; //changes the actual value in the memory address

	cout << ival << endl; //5000

	int x = 42;
	int* y;
	int* &z = y; //z is a reference to the pointer y

	z = &x;
	cout << z << endl; //Memory address
	cout << *z << endl;

	cout << y << endl; //Memory address
	cout << *y << endl;

	return 0;
}