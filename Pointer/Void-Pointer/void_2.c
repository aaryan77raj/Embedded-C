#include <stdio.h>

int main() 
{
    int a = 1025;
    int *p;
    p = &a;
    printf("size of integer is %ld bytes\n", sizeof(int));
    printf("Address = %p, value = %d\n", p, *p);
    // Void pointer - Generic Pointer
    void *p0;
    p0 = p;
    printf("Address = %p\n", p0);
}