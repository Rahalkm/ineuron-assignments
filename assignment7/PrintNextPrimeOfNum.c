#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int findNextPrime(int num) {
    int next = num + 1;

    while (1) {
        if (isPrime(next)) {
            return next;
        }
        next++;
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int nextPrime = findNextPrime(num);

    printf("Next prime number after %d is %d\n", num, nextPrime);

    return 0;
}

