#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n = 1234;
    char str[12];
    itoa(n, str, 10); // non-standard C function
    printf("String: %s\n", str);
    return 0;
}