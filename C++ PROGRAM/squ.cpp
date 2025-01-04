#include <iostream>
#include <cmath>  // For sqrt() function

using namespace std;

// Function to square a number
double squareNumber(double n) {
    return n * n;
}

// Function to find the square root of a number
double squareRoot(double n) {
    return sqrt(n);
}

int main() {
    double number;
    cout << "Welcome to the Square Calculator!" << endl;
    cout << "Enter a number: ";
    cin >> number;

    double square = squareNumber(number);
    cout << "The square of " << number << " is: " << square << endl;
    if (number >= 0) {
        double squareRt = squareRoot(number);
        cout << "The square root of " << number << " is: " << squareRt << endl;
    } else {
        cout << "Error: Square root of a negative number is not a real number!" << endl;
    }

    return 0;
}
