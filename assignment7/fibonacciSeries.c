#include <stdio.h>

int fibonacci(int n) {
    int first = 0;
    int second = 1;

    if (n == 0)
        return first;
    else if (n == 1)
        return second;

    int i;
    int fib;

    for (i = 2; i <= n; i++) {
        fib = first + second;
        first = second;
        second = fib;
    }

    return fib;
}

int main() {
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    int nthTerm = fibonacci(n);

    printf("The %dth term of the Fibonacci series is: %d\n", n, nthTerm);

    return 0;
}
