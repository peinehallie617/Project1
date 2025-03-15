
// This program demonstrates a simple function that takes an integer and returns its factorial

int factorial(int n) {
    if (n <= 1) { // Base case: if n is 0 or 1, the result is 1
        return 1;
    } else {
        return n * factorial(n-1); // Recursive case: multiply n by the factorial of n-1
    }
}