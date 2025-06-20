#include <stdio.h>
#include "arithmetic_operations.h"

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\na + b : %d", add(a, b));
    printf("\na - b : %d", sub(a, b));
    printf("\na * b : %d", mul(a, b));
    printf("\na / b : %d", divide(a, b));

    return 0;
}
