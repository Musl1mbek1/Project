#include <stdio.h>
int my_islower(char param_1) {
    if (param_1 >= 'a' && param_1 <= 'z') {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    printf("Example 00: %d\n", my_islower('a'));  // Output: 1
    printf("Example 01: %d\n", my_islower('A'));  // Output: 0
    printf("Example 02: %d\n", my_islower('0'));  // Output: 0

    return 0;
}
