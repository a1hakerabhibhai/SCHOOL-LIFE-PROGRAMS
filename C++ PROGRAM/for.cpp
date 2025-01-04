#include<iostream>
using namespace std;

int main() {
    int n, product;
    

    cout << "Enter a number: ";
    cin >>n;

    for (int i = 1; i <= 1000; i++) {
        product = n * i;  
        cout << n << " * " << i << " = " << product << endl;  
    }
    
    return 0;
}
