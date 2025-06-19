#include <iostream>
#include <cstdio>
using namespace std;
int example_function (int);

int main() {
    int x = 5;
    cout << "\n" << "The output is: " << example_function(x);
    int y = 6;
    cout << "\n" << "The output is: " << example_function(y);
    int z = 7;
    cout << "\n" << "The output is: " << example_function(z);
    getchar();
}
inline int example_function(int x1) {
    return 5 + x1;
}
