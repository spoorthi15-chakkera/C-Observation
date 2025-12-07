#include <stdio.h>
int add(int a, int b);
int main() {
    int x = 10, y = 20;
    int result;
    result = add(x, y);
    printf("The sum is: %d\n", result);
    return 0;
}
int add(int a, int b) {
    return a + b;
}

