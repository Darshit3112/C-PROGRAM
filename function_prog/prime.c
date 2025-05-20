#include <stdio.h>

// Function declaration (with parameter, no return)
void checkPrime(int num);

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Function call
    checkPrime(number);

    return 0;
}

// Function definition
void checkPrime(int num) {
    int i, isPrime = 1;

    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
}
