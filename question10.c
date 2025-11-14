#include <stdio.h>

int main(void) {
    char c;
    int i;
    long int li;
    float f;
    double d;

    printf("Size of c (char variable) = %zu bytes\n", sizeof(c));
    printf("Size of i (int variable) = %zu bytes\n", sizeof(i));
    printf("Size of li (long int variable) = %zu bytes\n", sizeof(li));
    printf("Size of f (float variable) = %zu bytes\n", sizeof(f));
    printf("Size of d (double variable) = %zu bytes\n", sizeof(d));

    return 0;
}
