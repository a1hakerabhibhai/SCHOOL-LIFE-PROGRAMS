#include <iostream>
#include <string>
using namespace std;

int main() {
    // Clear the console (Note: system("cls") may not work on all systems)
    system("cls"); // This works on Windows, use system("clear") for Linux/Mac.

    string name;
    double salary;
    string address;

    // Collecting biodata
    cout << "Enter your name: ";
    getline(cin, name); // Use getline to allow for spaces in the name

    cout << "Enter your salary: ";
    cin >> salary;

    // Clear the input buffer before taking address
    cin.ignore(); 

    cout << "Enter your address: ";
    getline(cin, address); // Use getline for address to allow spaces

    // Display the collected biodata
    cout << "\n--- Biodata ---\n";
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;
    cout << "Address: " << address << endl;

    return 0;
}
