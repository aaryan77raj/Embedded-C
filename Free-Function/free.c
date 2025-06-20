#include <stdio.h>
#include <stdlib.h>

void main() {
    int *p, i, size;
    printf("Enter the array size..:");
    scanf("%d", &size);
    p = (int *) malloc(size * sizeof(int));

if (p == NULL) {
    printf("OUT OF MEMORY error!");
}
else {
    printf("\nEnter the array elements one by one.. \n");
    for (i = 0; i < size; i++) {
        scanf("%d", &p[i]);
    }
    printf("\nThe array elements are..\n");
    for (i = 0; i < size; i++) {
        printf("%d-->", p[i]);
    }
}
free(p);
}