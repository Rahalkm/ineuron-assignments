#include <stdio.h>

int findFirstOnePosition(int num) {
    int position = 1;

    // Iterate through each bit of the number
    while ((num & 1) == 0) {
        num = num >> 1; // Right-shift the number by 1 bit
        position++;
    }

    return position;
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int position = findFirstOnePosition(num);

    printf("Position of first 1 in LSB: %d\n", position);

    return 0;
}
