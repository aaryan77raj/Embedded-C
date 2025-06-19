#include <stdio.h>

main() {
    int i, ret;
    for (i = 1; i <= 10; i++) {
        ret = add();
    }
}
int add() {
    static int sum = 10;
    sum++;
    printf("\n Sum is %d", sum);
}