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

/*OR
#include <stdio.h>

int add();

int main() {
    int i, ret;
    for (i = 1; i <= 10; i++) {
        ret = add();
    }
    return 0;
}
int add() {
    static int sum = 10;
    sum++;
    printf("\n Sum is %d", sum);
    return sum;
}
*/