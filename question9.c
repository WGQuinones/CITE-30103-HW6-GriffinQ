#include <stdio.h>

int main(void) {
    int a, b;
    int int_result;
    float float_result1, float_result2;

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    int_result = a / b;

    float_result1 = a / b;
    float_result2 = (float)a / b;

    printf("Integer division: %d\n", int_result);
    printf("Float result (implicit): %.2f\n", float_result1);
    printf("Float result (explicit cast): %.2f\n", float_result2);

    return 0;
}
