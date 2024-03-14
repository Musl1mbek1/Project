#include <stdio.h>
int my_is_negative(int param_1) {
    if (param_1 < 0) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    printf("%d\n", my_is_negative(-1));  // Output: 1
    printf("%d\n", my_is_negative(0));   // Output: 0
    printf("%d\n", my_is_negative(10));  // Output: 0

    return 0;
}
