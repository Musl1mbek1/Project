#include <stdio.h>
int my_isdigit(char param_1) {
    if (param_1 >= '0' && param_1 <= '9') {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    printf("Example 00: %d\n", my_isdigit('a'));  // Output: 0
    printf("Example 01: %d\n", my_isdigit(' '));  // Output: 0
    printf("Example 02: %d\n", my_isdigit('0'));  // Output: 1

    return 0;
}
