#include <stdio.h>

int isCoPrime(int num1, int num2) {
    int smaller = (num1 < num2) ? num1 : num2;

    for (int i = 2; i <= smaller; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            return 0; // Not co-prime
        }
    }

    return 1; // Co-prime
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (isCoPrime(num1, num2)) {
        printf("%d and %d are co-prime numbers.\n", num1, num2);
    } else {
        printf("%d and %d are not co-prime numbers.\n", num1, num2);
    }

    return 0;
}

