#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "John";
    int age = 30;
    bool isHappy = true;
    cout << "Hello, my name is " << name << " and I am " << age << " years old.";
    if (isHappy) {
        cout << "I am happy today!";
    } else {
        cout << "I am not happy today :(";
    }
    return 0;
}
