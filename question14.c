#include <stdio.h>

int main(void) {
    int n;
    const char *result;

    printf("Enter an integer: ");
    scanf("%d", &n);

    result = (n > 0) ? "Positive"
           : (n < 0) ? "Negative"
                     : "Zero";

    printf("Number is %s\n", result);

    return 0;
}
