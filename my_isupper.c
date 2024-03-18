#include <stdio.h>
int my_isupper(char param_1) {
    if (param_1 >= 'A' && param_1 <= 'Z') {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    printf("Example 00: %d\n", my_isupper('a'));  // Output: 0
    printf("Example 01: %d\n", my_isupper('A'));  // Output: 1
    printf("Example 02: %d\n", my_isupper('0'));  // Output: 0

    return 0;
}
