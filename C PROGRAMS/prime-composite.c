#include <stdio.h>

int main() {
    int n, i, flag = 0;

    // Input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Handle special cases
    if (n == 0 || n == 1) {
        printf("%d is neither prime nor composite.\n", n);
        return 0;
    }

    // Check if n is divisible by any number other than 1 and itself
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            flag = 1; // n is composite
            break;
        }
    }

    // Output the result
    if (flag == 0)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is a composite number.\n", n);

    return 0;
}
