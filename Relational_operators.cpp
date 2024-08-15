#include <iostream>
using namespace std;

int main() {
    int a, b;
    a = 10;
    b = 50;
    bool result;

    result = (a == b);   // false
    cout << "10 == 50 is " << result << endl;

    result = (a != b);  // true
    cout << "10! = 50 is " << result << endl;

    result = a > b;   // false
    cout << "10 > 50 is " << result << endl;

    result = a < b;   // true
    cout << "10 < 50 is " << result << endl;

    result = a >= b;  // false
    cout << "10 >= 50 is " << result << endl;

    result = a <= b;  // true
    cout << "10 <= 50 is " << result << endl;

    return 0;
}


O/P
10 == 50 is 0
10! = 50 is 1
10 > 50 is 0
10 < 50 is 1
10 >= 50 is 0
10 <= 50 is 1