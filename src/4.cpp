
// Generating random C++ code using std::random_device and std::uniform_int_distribution.

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seeding the random number generator with current time.
    std::srand(std::time(0));

    // Generating a random integer between 1 and 10.
    int randomNumber = std::uniform_int_distribution<>(1, 10)(std::random_device());

    // Printing the generated number to the console.
    std::cout << "Random number: " << randomNumber << std::endl;

    return 0;
}