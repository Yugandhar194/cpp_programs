// CPP Program to demonstrate the Conditional Operators
#include <iostream>
using namespace std;

int main()
{
	int a = 30, b = 4;

	// Ternary Operator
	int result = (a < b) ? b : a;
	cout << "The greatest number is: " << result << endl;

	return 0;
}



O/P:
The greatest number is: 30