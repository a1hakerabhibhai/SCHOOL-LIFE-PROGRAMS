#include <stdio.h>  // Standard input-output header

int main() {
    int n, i;

    // Ask the user to input the number for which the table is required
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop through and print the multiplication table from 1 to 10
    printf("Multiplication Table of %d:\n", n);
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;  // Return 0 to indicate successful program termination
}
