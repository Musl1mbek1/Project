#include <stdio.h>

int my_mult(int param_1, int param_2) {
    return param_1 * param_2;
}

int main() {
    int result;

    // Example 00
    result = my_mult(0, 1);
    printf("Example 00: Result = %d\n", result);  // Output: 0

    // Example 01
    result = my_mult(10, 10);
    printf("Example 01: Result = %d\n", result);  // Output: 100

    // Example 02
    result = my_mult(-10, 10);
    printf("Example 02: Result = %d\n", result);  // Output: -100

    return 0;
}
