#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int a = 7;
    char str[20];
    sprintf(str, "%d", a);
    printf("The integer %d converted to string is: %s\n", a, str);
    return 0;
}