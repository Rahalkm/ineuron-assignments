#include <stdio.h>

int calculateHCF(int num1, int num2) {
    while (num1 != num2) {
        if (num1 > num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
    }

    return num1;  // or num2 (since both are equal at this point)
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int hcf = calculateHCF(num1, num2);

    printf("HCF of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}
