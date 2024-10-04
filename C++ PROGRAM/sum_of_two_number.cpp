#include<iostream>
#include<conio.h>
using namespace std;
int sum(int, int);  // Function prototype
int s;  // Global variable

 int main() {  // Use int main() instead of void main()
    int a, b;
    cout << "Enter any two numbers: ";
    cin >> a >> b;  // Correct input format

    s = sum(a, b);  // Store result in 's'
    cout << "Sum = " << s;  // Output the sum
    getch();
    return 0;  // Return 0 from main
}

// Definition of sum function
int sum(int x, int y) {
    return x + y;
}
