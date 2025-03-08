#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  // Initialize a vector with some numbers
  vector<int> numbers = {1, 2, 3, 4, 5};
  // Print the vector to the console
  for (int number : numbers) {
    cout << number << " ";
  }
  cout << endl;
  return 0;
}
