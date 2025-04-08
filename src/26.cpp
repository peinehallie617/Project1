#include <iostream>
using namespace std;

int main() {
    int x = 5;
    double y = 3.14;
    string z = "Hello, World!";
    char a = 'A';
    if (x > 0) {
        cout << "The value of x is " << x << endl;
    }
    else {
        cout << "The value of x is not greater than 0." << endl;
    }
    for(int i = 1; i <= 5; ++i) {
        if (i % 2 == 0) {
            cout << "Even number: " << i << endl;
        }
        else {
            cout << "Odd number: " << i << endl;
        }
    }
    if(a < 'A') {
        cout << "The value of a is " << a << endl;
    }
    else {
        cout << "The value of a is not less than 'A'. " << endl;
    }
}
