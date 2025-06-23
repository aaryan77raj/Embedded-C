#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;              // goes on stack
    int *p;
    p = (int *)malloc(sizeof(int));     // typecasting
    *p = 10;        // dereferencing
    free(p);
    *p = 20;
    printf("value of p : %d\n", *p);
}