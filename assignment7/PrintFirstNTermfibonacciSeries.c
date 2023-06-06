#include <stdio.h>

void fibonacci(int n) {
    int first = 0;
    int second = 1;

    printf("Fibonacci Series: ");

    if (n >= 1)
        printf("%d ", first);

    if (n >= 2)
        printf("%d ", second);

    int i;
    int fib;

    for (i = 3; i <= n; i++) {
        fib = first + second;
        printf("%d ", fib);

        first = second;
        second = fib;
    }

    printf("\n");
}

int main() {
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
