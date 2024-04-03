#include <iostream>
#include <chrono>

void collatzConjecture(int n) {
    while (n != 1) {
        std::cout << n << " -> ";
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = (3 * n) + 1;
        }
    }
    std::cout << "1" << std::endl;
}

int main() {
    int n;

    // Input the positive integer n
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    // Validate input
    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1;  // Exit with an error code
    }

    // Measure execution time
    auto start_time = std::chrono::high_resolution_clock::now();

    // Simulate Collatz Conjecture
    collatzConjecture(n);

    auto end_time = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);

    // Check if execution time exceeds limit
    if (duration.count() > 1000) {
        std::cout << "Execution time exceeded the limit." << std::endl;
        return 1;  // Exit with an error code
    }

    return 0;  // Exit successfully
}
