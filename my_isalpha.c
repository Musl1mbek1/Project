#include <stdio.h>
int my_isalpha(char param_1) {
    if ((param_1 >= 'A' && param_1 <= 'Z') || (param_1 >= 'a' && param_1 <= 'z')) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    printf("Example 01: %d\n", my_isalpha('a'));  // Output: 1
    printf("Example 02: %d\n", my_isalpha(' '));  // Output: 0
    printf("Example 03: %d\n", my_isalpha('0'));  // Output: 0

    return 0;
}
