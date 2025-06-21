#include <stdio.h>

int main()
{
    int  a = 10;
    int *p;
    p = &a;
    // Pointer arithmetic 
    printf("Address p is %p\n", p);
    printf("Value at address p is %d\n", *p);
    printf("Size of integer is %ld bytes\n", sizeof(int));
    printf("Address of p + 1 is %p\n", p + 1);
    printf("Value at address p + 1 is %d\n", *(p + 1));
}