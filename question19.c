#include <stdio.h>

int main(void) {
    int n;
    int i = 1;
    int sum = 0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    while (i <= n) {
        sum = sum + i;
        i = i + 1;
    }

    printf("Sum from 1 to %d = %d\n", n, sum);

    return 0;
}
