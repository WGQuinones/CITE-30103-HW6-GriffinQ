#include <stdio.h>

int main(void) {
    int n, reversed = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n = n / 10;
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}
