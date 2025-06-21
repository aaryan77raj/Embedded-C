#include <stdio.h>

int main() {
    int a;
    int *p;
    p = &a;
    a = 5;
    printf("%p\n", p);
    printf("%p\n", &a);
    printf("%p\n", &p);
    printf("%d\n", *p); // dereferencing
    *p = 8;
    printf("%d\n", *p);
    printf("%d\n", a);
}