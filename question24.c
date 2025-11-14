#include <stdio.h>

int main(void) {
    int count = 0;

    for (int i = 1; i <= 50; i++) {

        if (i == 40) {
            break;  // stop completely
        }

        if (i % 5 == 0) {
            continue;  // skip multiples of 5
        }

        printf("%d ", i);
        count++;
    }

    printf("\nNumbers printed: %d\n", count);

    return 0;
}
