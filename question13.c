#include <stdio.h>

int main(void) {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if ( (n % 2 == 0) && (n % 3 == 0) && (n % 7 != 0) ) {
        printf("Number meets the condition.\n");
    } else {
        printf("Number does NOT meet the condition.\n");
    }

    return 0;
}
