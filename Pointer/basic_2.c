#include <stdio.h>

int main()
{
    int a; // first variable
    int *p; // pointer variable declaration
    a = 10;
    p = &a; // points at a or stores the address of a
    printf("%p\n", p);
    printf("%d\n", *p);
    printf("%p\n", &a);
    *p = 12; // dereferencing
    printf("%d\n", *p);

    int b = 20; // second variable
    *p = b; // a holds the value of b now (20)
    printf("%p\n", p);
    printf("%d\n", *p);
}