#include <stdio.h>

int main() {
    int a = 7;
    double b = 9.256;
    void *vp; // void pointer

    vp = &a;
    printf("a = %d\n", *((int*)vp));
    vp = &b;
    printf("b = %f", *((double*)vp));
    return 0;
}