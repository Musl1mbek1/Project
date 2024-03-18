#include <stdio.h>

int my_sub(int param_1, int param_2) {
    return param_1 - param_2;
}

int main() {
    int result;

    // Example 00
    result = my_sub(0, 1);
    printf("Example 00: Result = %d\n", result);  // Output: -1

    // Example 01
    result = my_sub(10, 10);
    printf("Example 01: Result = %d\n", result);  // Output: 0

    // Example 02
    result = my_sub(-10, 10);
    printf("Example 02: Result = %d\n", result);  // Output: -20

    return 0;
}
