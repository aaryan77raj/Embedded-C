#include <stdio.h>

int main()
{
    int A[5] = {2, 3, 4, 5, 6};
    int *P;
    P = &A[0];
    printf("Address of array: %p\n", P);
    printf("Value of array on that address: %d\n", *P);
    printf("Next address of array: %p\n", P + 1);
    printf("Next value of array: %d\n", *(P + 1));

    // Also pointer reads address of an array by default :

    P = A;
    printf("%p\n", A);
    printf("%d\n", *A);
    printf("%p\n", A + 1);
    printf("%d\n", *A + 1);
}