#include <stdio.h>
#include <stdlib.h>

int main() {
    char* str1 = "171";
    char* str2 = "3.14";
    
    int num1 = atoi(str1);
    int num2 = atoi(str2);

    int sum = num1 + num2;
    printf("The sum of %d and %d is : %d", num1, num2, sum);
    return 0;
}