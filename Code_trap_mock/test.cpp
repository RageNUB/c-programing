#include <iostream>
using namespace std;

// Function to check if a number is a special number
bool isSpecialNumber(int num) {
    int digit1 = num % 10;
    int digit2 = (num / 10) % 10;
    int digit3 = num / 100;

    return (digit1 % 3 == 0) && (digit2 % 3 == 0) && (digit3 % 3 == 0) && (digit1 < digit2) && (digit2 < digit3);
}

// Function to count special numbers in the given range
int countSpecialNumbers(int N) {
    int count = 0;
    
    for (int i = 123; i <= N; i++) {
        if (isSpecialNumber(i)) {
            count++;
        }
    }
    
    return count;
}

int main() {
    // Input
    int N;
    cin >> N;

    // Output
    cout << countSpecialNumbers(N) << endl;

    return 0;
}
