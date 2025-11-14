#include <stdio.h>

#define PI 3.14159      // PI as a macro

int main(void) {
    float radius;
    const float PI_CONST = 3.14159f;  // PI as a const variable
    float area, circumference;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;              // using #define PI
    circumference = 2 * PI_CONST * radius;    // using const PI

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}
