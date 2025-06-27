#include <stdio.h>

int main()
{
    int A[] = {2, 4, 5, 8, 1};
    printf("%p\n", A);
    printf("%p\n", &A[0]);
    printf("%d\n", A[0]);
    printf("%d\n", *A);


    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Address = %p\n", &A[i]);
        printf("Address = %p\n", A + i);
        printf("Value = %d\n", A[i]);
        printf("Address = %d\n", *(A + i));
    }
}