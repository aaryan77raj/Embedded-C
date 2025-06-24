#include <stdio.h>

int total;              // global
int Square(int x)
{
    return x * x;
}
int SquareOfSum(int x, int y) {
    int z = Square(x + y);
    return z;
}
int main()              // stack-frame
{
    int a = 4, b = 8;
    total = SquareOfSum(a, b);
    printf("output = %d\n", total);
}