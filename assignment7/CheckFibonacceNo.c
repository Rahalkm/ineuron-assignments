#include <stdio.h>

int isFibonacci(int num) {
    int a = 0;
    int b = 1;

    while (b < num) {
        int temp = b;
        b = a + b;
        a = temp;
    }

    return (b == num);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isFibonacci(num)) {
        printf("%d is in the Fibonacci series.\n", num);
    } else {
        printf("%d is not in the Fibonacci series.\n", num);
    }

    return 0;
}
