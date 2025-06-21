#include <stdio.h>

int main() 
{
    int a = 1025;
    int *p;
    p = &a;
    printf("size of integer is %ld bytes\n", sizeof(int));
    printf("Address = %p, value = %d\n", p, *p);
    printf("Address = %p, value = %d\n", p + 1, *(p + 1));
    char *p0;
    p0 = (char *)p; // typecasting
    printf("size of integer is %ld bytes\n", sizeof(int));
    printf("Address = %p, value = %d\n", p0, *p0);
    printf("Address = %p, value = %d\n", p0 + 1, *(p0 + 1));
}