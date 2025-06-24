#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int *A = (int *) calloc(n, sizeof(int)); // dynamically allocated array

    /*  calloc doesn't require inititalization,
    as it's already initialized to zero :
    for (int i = 0; i < n; i++)
    {
        A[i] = i + 1;
    }
    */

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", A[i]);
    }
}