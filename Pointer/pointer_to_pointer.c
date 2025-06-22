#include <stdio.h>

int main() 
{
    int x = 5;
    int *p = &x;
    *p = 6;                     // first dereferencing
    int **q = &p;
    int ***r = &q;
    printf("%d\n", *p);         // 6
    printf("%p\n", *q);         // address of p
    printf("%d\n", *(*q));      // 6 
    printf("%p\n", *(*r));      // address of q = adddress of p
    printf("%d\n", *(*(*r)));   // 6
    ***r = 10;                  // second dereferencing
    printf("x = %d\n", x);
    **q = *p + 2;               // third dereferencing
    printf("x = %d\n", x);
}