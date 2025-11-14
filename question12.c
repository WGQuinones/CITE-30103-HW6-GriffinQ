#include <stdio.h>

int main(void) {
    int a = 5, b = 3, res1, res2;

    res1 = (a + b) << 1;   // using parentheses
    res2 = (a + b) * 2;    // using normal multiplication

    printf("Using (a + b) << 1: %d\n", res1);
    printf("Using (a + b) * 2: %d\n", res2);

    return 0;
}
