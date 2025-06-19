#include <stdio.h>
#define a(x,y) x##y
#define b(x) #x
#define c(x) b(x)

int main(void) {
printf("%s\n", c(a(Sachin, Tendulkar)));
printf("%s\n", b(a(22, 55)));
printf("%s\n", b(!8 *));
return 0;
}