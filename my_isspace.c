#include <stdio.h>
int my_isspace(char param_1) {
    if (param_1 == ' ') {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    printf("Example 00: %d\n", my_isspace('a'));  // Output: 0
    printf("Example 01: %d\n", my_isspace('A'));  // Output: 0
    printf("Example 02: %d\n", my_isspace(' '));  // Output: 1

    return 0;
}
